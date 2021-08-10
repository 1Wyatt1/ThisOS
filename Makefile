build:
	chmod +x build.sh
	chmod +x clean.sh
	chmod +x default-host.sh
	chmod +x headers.sh
	chmod +x iso.sh
	./clean.sh
	./build.sh
	./iso.sh