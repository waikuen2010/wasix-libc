#ifndef __wasilibc___header_sys_socket_h
#define __wasilibc___header_sys_socket_h

#include <__struct_msghdr.h>
#include <__struct_if_addrs.h>
#include <__struct_sockaddr.h>
#include <__struct_sockaddr_storage.h>

#include <wasi/api.h>

#define SHUT_RD __WASI_SDFLAGS_RD
#define SHUT_WR __WASI_SDFLAGS_WR
#define SHUT_RDWR (SHUT_RD | SHUT_WR)

#ifndef IF_NAMESIZE
#define IF_NAMESIZE 16
#endif

#ifndef IFNAMSIZ
#define IFNAMSIZ	IF_NAMESIZE
#endif

#define MSG_OOB       0x0001
#define MSG_PEEK      0x0002
#define MSG_DONTROUTE 0x0004
#define MSG_CTRUNC    0x0008
#define MSG_PROXY     0x0010
#define MSG_TRUNC     0x0020
#define MSG_DONTWAIT  0x0040
#define MSG_EOR       0x0080
#define MSG_WAITALL   0x0100
#define MSG_FIN       0x0200
#define MSG_SYN       0x0400
#define MSG_CONFIRM   0x0800
#define MSG_RST       0x1000
#define MSG_ERRQUEUE  0x2000
#define MSG_NOSIGNAL  0x4000
#define MSG_MORE      0x8000
#define MSG_WAITFORONE 0x10000
#define MSG_BATCH     0x40000
#define MSG_ZEROCOPY  0x4000000
#define MSG_FASTOPEN  0x20000000
#define MSG_CMSG_CLOEXEC 0x40000000

#define SOCK_DGRAM __WASI_SOCK_TYPE_SOCKET_DGRAM
#define SOCK_STREAM __WASI_SOCK_TYPE_SOCKET_STREAM
#define SOCK_RAW __WASI_SOCK_TYPE_SOCKET_RAW
#define SOCK_SEQPACKET __WASI_SOCK_TYPE_SOCKET_SEQPACKET

#define SOCK_NONBLOCK (0x00004000)
#define SOCK_CLOEXEC (0x00002000)

#define SOL_SOCKET 0x7fffffff
#define SOL_IP __WASI_SOCK_PROTO_IP
#define SOL_ICMP __WASI_SOCK_PROTO_ICMP
#define SOL_IGMP __WASI_SOCK_PROTO_IGMP
#define SOL_IPIP __WASI_SOCK_PROTO_IPIP
#define SOL_TCP __WASI_SOCK_PROTO_TCP
#define SOL_EGP __WASI_SOCK_PROTO_EGP
#define SOL_PUP __WASI_SOCK_PROTO_PUP
#define SOL_UDP __WASI_SOCK_PROTO_UDP
#define SOL_IDP __WASI_SOCK_PROTO_IDP
#define SOL_TP __WASI_SOCK_PROTO_TP
#define SOL_DCCP __WASI_SOCK_PROTO_DCCP
#define SOL_IPV6 __WASI_SOCK_PROTO_IPV6
#define SOL_ROUTING __WASI_SOCK_PROTO_ROUTING
#define SOL_FRAGMENT __WASI_SOCK_PROTO_FRAGMENT
#define SOL_RSVP __WASI_SOCK_PROTO_RSVP
#define SOL_GRE __WASI_SOCK_PROTO_GRE
#define SOL_ESP __WASI_SOCK_PROTO_ESP
#define SOL_AH __WASI_SOCK_PROTO_AH
#define SOL_ICMPV6 __WASI_SOCK_PROTO_ICMPV6
#define SOL_NONE __WASI_SOCK_PROTO_NONE
#define SOL_DSTOPTS __WASI_SOCK_PROTO_DSTOPTS
#define SOL_MTP __WASI_SOCK_PROTO_MTP
#define SOL_BEETPH __WASI_SOCK_PROTO_BEETPH
#define SOL_ENCAP __WASI_SOCK_PROTO_ENCAP
#define SOL_PIM __WASI_SOCK_PROTO_PIM
#define SOL_COMP __WASI_SOCK_PROTO_COMP
#define SOL_SCTP __WASI_SOCK_PROTO_SCTP
#define SOL_MH __WASI_SOCK_PROTO_MH
#define SOL_UDPLITE __WASI_SOCK_PROTO_UDPLITE
#define SOL_MPLS __WASI_SOCK_PROTO_MPLS
#define SOL_ETHERNET __WASI_SOCK_PROTO_ETHERNET
#define SOL_MPTCP __WASI_SOCK_PROTO_MPTCP

#define SO_ACCEPTCONN __WASI_SOCK_OPTION_LISTENING
#define SO_BROADCAST __WASI_SOCK_OPTION_BROADCAST
#define SO_DONTROUTE __WASI_SOCK_OPTION_DONT_ROUTE
#define SO_NODELAY __WASI_SOCK_OPTION_NO_DELAY
#define SO_ERROR __WASI_SOCK_OPTION_LAST_ERROR
#define SO_KEEPALIVE __WASI_SOCK_OPTION_KEEP_ALIVE
#define SO_LINGER __WASI_SOCK_OPTION_LINGER
#define SO_OOBINLINE __WASI_SOCK_OPTION_OOB_INLINE
#define SO_ONLYV6 __WASI_SOCK_OPTION_ONLY_V6
#define SO_RCVBUF __WASI_SOCK_OPTION_RECV_BUF_SIZE
#define SO_RCVLOWAT __WASI_SOCK_OPTION_RECV_LOWAT
#define SO_RCVTIMEO __WASI_SOCK_OPTION_RECV_TIMEOUT
#define SO_REUSEPORT __WASI_SOCK_OPTION_REUSE_PORT
#define SO_REUSEADDR __WASI_SOCK_OPTION_REUSE_ADDR
#define SO_SNDBUF __WASI_SOCK_OPTION_SEND_BUF_SIZE
#define SO_SNDLOWAT __WASI_SOCK_OPTION_SEND_LOWAT
#define SO_SNDTIMEO __WASI_SOCK_OPTION_SEND_TIMEOUT
#define SO_MCASTLOOPV4 __WASI_SOCK_OPTION_MULTICAST_LOOP_V4
#define SO_MCASTLOOPV6 __WASI_SOCK_OPTION_MULTICAST_LOOP_V6
#define SO_CONNTIMEO __WASI_SOCK_OPTION_CONNECT_TIMEOUT
#define SO_ACCPTIMEO __WASI_SOCK_OPTION_ACCEPT_TIMEOUT
#define SO_TTL __WASI_SOCK_OPTION_TTL
#define SO_MCASTTTLV4 __WASI_SOCK_OPTION_MULTICAST_TTL_V4
#define SO_TYPE __WASI_SOCK_OPTION_TYPE
#define SO_PROTOCOL __WASI_SOCK_OPTION_PROTO
#define SO_MARK __WASI_SOCK_OPTION_NOOP
#define SO_BINDTODEVICE __WASI_SOCK_OPTION_NOOP
#define SO_INCOMING_CPU __WASI_SOCK_OPTION_NOOP
#define SO_ATTACH_FILTER __WASI_SOCK_OPTION_NOOP
#define SO_DETACH_FILTER __WASI_SOCK_OPTION_NOOP

#define AF_UNSPEC __WASI_ADDRESS_FAMILY_UNSPEC
#define AF_INET __WASI_ADDRESS_FAMILY_INET4
#define AF_INET6 __WASI_ADDRESS_FAMILY_INET6
#define AF_UNIX __WASI_ADDRESS_FAMILY_UNIX

#define PF_UNSPEC       0
#define PF_INET         2
#define PF_INET6        10

#define SOMAXCONN       128

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif

#endif
