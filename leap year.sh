#!/bin/bash

echo "leap year"
echo "Enter the Number" 
read n
if(let  n%4==0)
then 
echo "$n is leap year" 
else 
echo "$n is not a leap year"
 fi
