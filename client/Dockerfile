FROM ubuntu:latest

COPY . /client

WORKDIR /client

RUN apt-get update && apt-get install -y build-essential libsfml-dev
RUN g++ client.cpp -lsfml-network -lsfml-system -o client