#!/usr/bin/bash
d=`date `
git commit -a -m  "update on $d"
git push
rm data_center.pdf
make 
