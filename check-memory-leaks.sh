#!/usr/bin/env bash

valgrind -q --leak-check=full ./build/main
