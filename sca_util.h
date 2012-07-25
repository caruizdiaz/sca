#ifndef SCA_UTIL_H
#define SCA_UTIL_H

#include "sca_common.h"

/* populate a str pointer with contact uri from a SIP request or response */
int	sca_get_msg_contact_uri( sip_msg_t *, str * );

/* convenient extraction of cseq number from Cseq header */
int	sca_get_msg_cseq_number( sip_msg_t * );

/* convenient From header parsing and extraction */
int	sca_get_msg_from_header( sip_msg_t *, struct to_body ** );

/* convenient To header parsing and extraction */
int	sca_get_msg_to_header( sip_msg_t *, struct to_body ** );

#endif /* SCA_UTIL_H */