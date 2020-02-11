# vs-preview-rebuild-repro

# steps

1. mkdir build && cd build
2. cmake -G "Visual Studio 16 2019" ..
3. Open vs-rebuild-repro.sln in VS2019 Preview (16.5.0 Preview 2.0)
4. Build "app1"
5. Build it again, observing the Output window - it shows redundant work being performed, building the dependencies (lib1, lib2)
6. Open vs-rebuild-repro.sln in VS2019 Community (16.4.4)
7. Build "app1"
8. Build it again, observing expected behaviour - all projects are up to date and no work is performed
