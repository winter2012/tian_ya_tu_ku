#!/bin/bash
for each in /www/wwwroot/tianyatuku.com/uploads/allimg/190628/*{.jpg,.gif}
do
s=`du -k $each | awk '{print $1}'`
if [ $s -gt 10 ]; then
convert -quality 100 -resize 235x350 $each $each
composite -gravity southeast -dissolve 80 /www/wwwroot/tianyatuku.com/uploads/allimg/lo.png $each $each 2>/dev/null
echo "$each: done!"
fi
done
exit 0
