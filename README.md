# CCME
Cache-Conscious Matrix Engine for MPI + OMP Parallel Systems

## Disclaimer
This repository is a personal project of myself, mattkab2.
It is not supported in any way by any of the organizations I am affiliated with, and is wholly independent of any projects I work on as part of a grad student and researcher.

## Philosophy
This repository is an attempt to create a useful implementation of various topics in linear algebra in C++, without pulling from libraries such as BLAS/LAPACK.
The ultimate goal is to create a library capable of performing various dense and sparse matrix calculations or factorizations which I deem useful.
This library will operate under a "Parallel by default" policy.

## Road map
The first step in getting the library up and running is to define a set of storage formats. 
These will be set up to hold matrices in different ways (Row, Column, and Diagonal Major) and should be capable of block-storage.
I wish to create formats which are highly extensible and easily parallel.
They will also feature multiple inheritance and easy conversion between types.

## Watch this space
