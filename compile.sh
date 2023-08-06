#!/bin/bash

g++ -I"deps/GLFW/include" src/main.cpp -o Pong.exe -L"deps/..." -lglfw3.lib
if [ -e "Pong.exe" ]; then
    echo "File complication was successfully transferring the file to the bin."
    mv Pong.exe "../bin"
else 
    read -p "File failed to be compiled. Read the error message."
fi

