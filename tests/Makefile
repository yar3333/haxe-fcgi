ifeq ($(shell getconf LONG_BIT),64)
        PLATFORM=Linux64
else
        PLATFORM=Linux
endif

NEKOPATH:=../../library/ndll/$(PLATFORM)

neko_test:
	haxe -cp ../library -cp src -main Test -D HXFCGI -neko bin/test.n
	cd bin && neko test.n

neko_example:
	haxe -cp ../library -cp src -main Example -D HXFCGI -neko bin/example.n
	cd bin && neko example.n
