#!/bin/bash
echo "Please enter the name of the file"
read file
echo "==================================================================="
echo ""
cd $file
g++ main.cpp && ./a.out
echo ""
echo "==================================================================="
