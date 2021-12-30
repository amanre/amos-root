#!/bin/sh
#
# ~/.xinitrc
#
# Executed by startx (run your window manager from here)

if [ -d /etc/X11/xinit/xinitrc.d ]; then
  for f in /etc/X11/xinit/xinitrc.d/*; do
    [ -x "$f" ] && . "$f"
  done
  unset f
fi
wal -R
sh ~/$USER/.conky/conky-pywal/start_conky.sh
sh ~/$USER/.bin/wal.sh
sh ~/$USER/.screenlayout/dualscreen.sh
/bin/plank
