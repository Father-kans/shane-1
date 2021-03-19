#!/usr/bin/bash

mount -o remount,rw /system
  	cp -f /data/openpilot/selfdrive/assets/fonts/opensans_* /system/fonts/
    cp -f /data/openpilot/selfdrive/assets/fonts.xml /system/etc/fonts.xml
# change permissions
chmod 644 /system/etc/fonts.xml
chmod 644 /system/fonts/NanumGothic*
