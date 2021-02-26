// Would the upc.c program still work if the expression 9 - ((total - 1) % 10)
// were replaced by (10 - (total % 10)) % 10?

// Answer: No, however the output would be the same most of the time. It would
// differ however, whenever total was a multiple of 10. Then the former would
// always give 0 as a result, whereas the replacement would give 10 as a result.
