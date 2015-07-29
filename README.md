# fcgi #
CGI/FastCGI library for Haxe (neko/cpp).

## Using as CGI ##
Just compile your project with this library.

## Using as FastCGI ##
Place your startup code into `Web.cacheModule()` callback function (like for `mod_neko`).
For `neko`, use `nekotools` to convert your `*.n` to executable file:
```shell
nekotools boot index.n
```
On *nix use `spawn-fcgi` to spawn necessary number of the FastCGI processes.