# Benchmark-std-visit

This benchmark supports testing numeric types with ranges from 2 to 10 and 20, and can randomly generate large-scale objects.
How to setup project

```
1. git clone --recurse-submodules <repo_url>
2. cd Benchmark-std-visit/benchmark
3. cmake -E make_directory "build"
4. cmake -DBENCHMARK_DOWNLOAD_DEPENDENCIES=on -DCMAKE_BUILD_TYPE=Release -S . -B "build"
(may need to open -DBENCHMARK_ENABLE_GTEST_TESTS=OFF flag)
5. cmake --build "build" --config Release
```

Then open the .sln file, build it using Release mode

The repo had been tested with Visual Studio 2022 and cmake 4.0.2
