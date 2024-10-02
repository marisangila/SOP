#!/bin/bash

# Iniciar alguns processos em segundo plano
for i in {1..5}
do
    sleep 60 &
    echo "Processo $i iniciado com PID $!"
done
