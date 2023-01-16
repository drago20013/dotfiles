#!/usr/bin/env bash

# Terminate already running bar instances
killall -q polybar
# If all your bars have ipc enabled, you can also use 
#polybar-msg cmd quit

#while pgrep -x polybar >/dev/null;do sleep 5; done
sleep 2
# Launch mybar on multiple monitors
#echo "---" | tee -a /tmp/mybar.log
if type "xrandr"; then
  for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
    MONITOR=$m polybar left &
    MONITOR=$m polybar right &
    MONITOR=$m polybar centre &
  done
else
  polybar left &
  polybar right &
  polybar centre &
fi

echo "Bars launched..."
