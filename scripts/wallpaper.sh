#!/bin/bash

LOCAL_PATH="/home/drago/wallpapers/anime"
while true 
do
   FILE=$(ls $LOCAL_PATH | shuf -n 1) 
   wal -i $LOCAL_PATH/$FILE
   sleep 900
done
