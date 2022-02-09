#!/bin/bash

dir=$(dirname $0)


mkdir $dir/bin
cd $dir/bin

git submodule update --init

cmake ..
make
