FROM ubuntu:latest

COPY . /server

WORKDIR /server


RUN apt-get update && apt-get install -y build-essential libsfml-dev
RUN g++ server.cpp -lsfml-network -o server