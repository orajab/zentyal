/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "../librpc/gen_ndr/named_pipe_auth.h"

#ifndef _HEADER_NDR_named_pipe_auth
#define _HEADER_NDR_named_pipe_auth

#define NDR_NAMED_PIPE_AUTH_CALL_COUNT (0)
void ndr_print_named_pipe_auth_req_info(struct ndr_print *ndr, const char *name, const union named_pipe_auth_req_info *r);
enum ndr_err_code ndr_push_named_pipe_auth_req(struct ndr_push *ndr, int ndr_flags, const struct named_pipe_auth_req *r);
enum ndr_err_code ndr_pull_named_pipe_auth_req(struct ndr_pull *ndr, int ndr_flags, struct named_pipe_auth_req *r);
void ndr_print_named_pipe_auth_req(struct ndr_print *ndr, const char *name, const struct named_pipe_auth_req *r);
size_t ndr_size_named_pipe_auth_req(const struct named_pipe_auth_req *r, struct smb_iconv_convenience *ic, int flags);
void ndr_print_named_pipe_auth_rep_info(struct ndr_print *ndr, const char *name, const union named_pipe_auth_rep_info *r);
enum ndr_err_code ndr_push_named_pipe_auth_rep(struct ndr_push *ndr, int ndr_flags, const struct named_pipe_auth_rep *r);
enum ndr_err_code ndr_pull_named_pipe_auth_rep(struct ndr_pull *ndr, int ndr_flags, struct named_pipe_auth_rep *r);
void ndr_print_named_pipe_auth_rep(struct ndr_print *ndr, const char *name, const struct named_pipe_auth_rep *r);
size_t ndr_size_named_pipe_auth_rep(const struct named_pipe_auth_rep *r, struct smb_iconv_convenience *ic, int flags);
#endif /* _HEADER_NDR_named_pipe_auth */
