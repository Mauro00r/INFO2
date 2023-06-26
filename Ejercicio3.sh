#!/bin/bash

cd ~
mkdir dir1 dir2
touch dir1/a.txt
ln -s ~/dir1/a.txt ~/dir2/b.txt
cd dir1
ls -li
cd ..
cd dir2
ls -li
