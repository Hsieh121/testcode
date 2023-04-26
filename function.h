#pragma once

#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

/*
    \  //
      *
      | 
*/
typedef struct _node
{
    struct _node *nodelink[3];
    struct _edge *edgelink[3];
    struct _land *landlink[3];
    int8_t status; //0 nothing 1 village 2 city
    int8_t owner;
} node;

typedef struct _side
{
    struct _side *sidelink[3];
    bool status; //0 nothing 1 road
    int8_t owner;//0 No one 1 , 2 ,3 ,4 players

};
