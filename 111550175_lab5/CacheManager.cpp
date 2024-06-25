#include "CacheManager.h"
#include <math.h>

unsigned int newindex = -1;
unsigned int findindex = 0;
int signal = 0;

CacheManager::CacheManager(Memory *memory, Cache *cache){
    // TODO: implement your constructor here
    // TODO: set tag_bits accord to your design.
    // Hint: you can access cache size by cache->get_size();
    // Hint: you need to call cache->set_block_size();
    this->memory = memory;
    this->cache = cache;
    size = cache->get_size();
    cache->set_block_size(4);
    //tag_bits = 32 - log2(cache->get_len()) - 2;
    tag_bits = 32 - 2;
};

CacheManager::~CacheManager(){

};

std::pair<unsigned, unsigned> CacheManager::directed_map(unsigned int addr){
    // map addr by directed-map method
    //unsigned int index_bit = int(log2(cache->get_len()));
    //unsigned int index = (addr >> 2) % cache->get_len(); 
    //signal = 0;
    newindex++;
    newindex = (newindex) % cache->get_len();
    //index++;
    //unsigned int tag = addr >> index_bit >> 2;
    //unsigned int tag = addr << index_bit << 2;
    unsigned int tag = addr>>2;
    //tag = tag >> index_bit >> 2;

    //unsigned int findindex = 0;
    for(unsigned int i=0; i<cache->get_len(); i++){
        if ((*cache)[i].tag==tag){
            signal = 1;
            findindex = i;
        }
    }
    if(signal==1){
        newindex--;
        signal=0;
        return {findindex, tag};
    }
    else {
        return {newindex, tag};
    }
}

unsigned int* CacheManager::find(unsigned int addr){
    // TODO:: implement function determined addr is in cache or not
    // if addr is in cache, return target pointer, otherwise return nullptr.
    // you shouldn't access memory in this function.
    auto [index, tag] = directed_map(addr);
    //int signal = 0;
    //if((*cache)[index].tag == tag)
        //return &((*cache)[index][0]);
    for(unsigned int i=0; i<cache->get_len(); i++){
        if ((*cache)[i].tag==tag){
            signal = 1;
            findindex = i;
            //return &((*cache)[i][0]);
        }
    }
    //else
    if(signal==1){
        signal=0;
        return &((*cache)[findindex][0]);
    }
    else{
        return nullptr;
    }
}

unsigned int CacheManager::read(unsigned int addr){
    // TODO:: implement replacement policy and return value 
    unsigned int* value_ptr = find(addr);
    if(value_ptr != nullptr)
        return *value_ptr;
    else{
        // not in cache
        auto [index, tag] = directed_map(addr);
        (*cache)[index].tag = tag;
        return (*cache)[index][0] = memory->read(addr);
    }
};

void CacheManager::write(unsigned int addr, unsigned value){
    // TODO:: write value to addr
    auto [index, tag] = directed_map(addr);
    if((*cache)[index].tag == tag)
        (*cache)[index][0] = value;
    memory->write(addr, value);
};

