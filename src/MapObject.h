/**
 @file MapObject.h
 @brief Fichier entête du module MapObject.c.
 @author Alexandre HASSLER Idir DJEMAOUNE Eloi POYET
 @date 23 MAI 2016
 */

#ifndef _MAPOBJECT_H
#define _MAPOBJECT_H

typedef struct
{
  float x, y, w, h;
  int ledgeType;
  int destroyed;
} Ledge;

typedef struct
{
  float x, y, w, h;
  int ladderType;
} Ladder;

typedef struct
{
  float x, y, w, h;
  int display;
} Gold;

typedef struct
{
  float x, y, w, h;
  int open;
} Portal;

typedef struct
{
  float x, y, w, h;
  int countdown;
  int used;
} Dynamite;

typedef struct
{
  float x, y, w, h;
  int lava_anim;
  //int lavaType;
} Lava;

typedef struct
{
  float x, y, w, h;
  int enemy_animFrame;
  int facingLeft;
} Enemy;

#endif
