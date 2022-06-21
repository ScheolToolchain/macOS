# macOS SDK
Forked from [phracker/MacOSX-SDKs](https://github.com/phracker/MacOSX-SDKs). Removed super old SDKs and added 11.x as well as cleaned up unwanted components.

## Commands
- ``find . -name "man" | grep -v "\.framework" | parallel rm -rf {}``
- ``find . -type d -name "Perl" | parallel rm -rf {}``
- ``find . -type d -name "iOSSupport" | parallel rm -rf {}``