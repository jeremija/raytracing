#!/bin/bash
set -e
make
src/raytracer > test.ppm
display test.ppm
