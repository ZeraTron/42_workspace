#!/bin/sh
FT_NBR1="\'\?\"\"\'"
FT_NBR2="rcrdmddd"

export $FT_NBR1 $FT_NBR2
result=$(./add_chelou.sh)
echo result
