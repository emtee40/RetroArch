#include "../ocr_driver.h"

static void* ocr_null_init()
{
	return NULL;
}
	
static void ocr_null_free(void* data)
{
}

char* ocr_null_get_text(struct ocr_image_info image)
{
	return "";
}
	
const ocr_driver_t ocr_null = {
   ocr_null_init,
   ocr_null_free,
   ocr_null_get_text,
   "null"
};