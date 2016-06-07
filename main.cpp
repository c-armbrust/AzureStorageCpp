#include "was/storage_account.h"
#include "was/blob.h"


int main()
{
	const utility::string_t storage_connection_string(U("DefaultEndpointsProtocol=https;AccountName=foosto;AccountKey=vD9sw2Cxig2UlLX21ip2PTOs+M0zcDOrpKsZP37NzAmWVWJpRDxwow0kdSfKlPEGg3cKD7Z9xtmcnP8OPk1tTQ=="));

	try
	{
    	// Retrieve storage account from connection string.
    	azure::storage::cloud_storage_account storage_account = azure::storage::cloud_storage_account::parse(storage_connection_string);

    	// Create the blob client.
    	azure::storage::cloud_blob_client blob_client = storage_account.create_cloud_blob_client();

    	// Retrieve a reference to a container.
    	azure::storage::cloud_blob_container container = blob_client.get_container_reference(U("my-sample-container"));

    	// Create the container if it doesn't already exist.
    	container.create_if_not_exists();
	}	
	catch (const std::exception& e)
	{
    	std::wcout << U("Error: ") << e.what() << std::endl;
	}  
	
return 0;
}
