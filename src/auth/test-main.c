#include "lib.h"
#include "test-common.h"
#include "test-auth.h"

int main(int argc, const char *argv[])
{
	const char *match = "";
	static const struct named_test test_functions[] = {
		TEST_NAMED(test_auth_request_var_expand)
		TEST_NAMED(test_db_dict_parse_cache_key)
		TEST_NAMED(test_username_filter)
		{ NULL, NULL }
	};

	if (argc > 2 && strcasecmp(argv[1], "--match") == 0)
		match = argv[2];

	return test_run_named(test_functions, match);
}
