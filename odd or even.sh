#!/bin/bash

echo "odd or even"
echo "Enter the Number" 
read n
if(let  n%2==0)
then 
echo "$n is even" 
else 
echo "$n is odd"
 fi
