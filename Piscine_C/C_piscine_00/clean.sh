#!/bin/sh
find runme -print -exec rm {} \;
find obj/*.o -print -exec rm {} \;
