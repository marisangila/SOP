#!/bin/bash

while true
do
    clear
    echo "Status dos Processos:"
    ps aux | grep sleep
    sleep 5
done
