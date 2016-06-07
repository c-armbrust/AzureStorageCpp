storagetest: 
	g++ main.cpp -std=c++14 -L /home/arc/azure-storage-cpp/Microsoft.WindowsAzure.Storage/build.debug/Binaries -L /home/arc/casablanca/Release/build.debug/Binaries -lboost_system -lssl -lcrypto -lcpprest -lazurestorage -I /home/arc/azure-storage-cpp/Microsoft.WindowsAzure.Storage/includes -I /home/arc/casablanca/Release/include -o storagetest
clean: 
	rm storagetest
