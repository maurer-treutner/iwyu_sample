# iwyu_sample
A sample project showing the use of iwyu.

This sample has been developed under Linux (Ubuntu 16.04) as a sample illustrating our blog entry https://www.maurer-treutner.de/index.php/de/blog/20-aktuelles/194-include-what-you-use. It can be easily ported for other operting systems like OS-X or Windows. To build the sample, you need a C++ 14 Compiler, CMake and include-what-yuo-use on your local machine.

On Unix like systems, you can build the project using the Makefile in its root directory. Make files and build results will be places into directory build.

Please note the IWYU restrictions regarding generators when trying to build for another generator than Unix Makefiels.
