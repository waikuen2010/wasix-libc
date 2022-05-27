/**
 * THIS FILE IS AUTO-GENERATED from the following files:
 *   wasix_snapshot_preview1.witx
 *
 * To regenerate this file execute:
 *
 *     cargo run --manifest-path tools/wasi-headers/Cargo.toml generate-libc
 */

#ifndef __wasi__
#define __wasi__ 1
#endif

#ifndef __wasi_api_h
#define __wasi_api_h

#include <stddef.h>
#include <stdint.h>

_Static_assert(_Alignof(int8_t) == 1, "non-wasi data layout");
_Static_assert(_Alignof(uint8_t) == 1, "non-wasi data layout");
_Static_assert(_Alignof(int16_t) == 2, "non-wasi data layout");
_Static_assert(_Alignof(uint16_t) == 2, "non-wasi data layout");
_Static_assert(_Alignof(int32_t) == 4, "non-wasi data layout");
_Static_assert(_Alignof(uint32_t) == 4, "non-wasi data layout");
_Static_assert(_Alignof(int64_t) == 8, "non-wasi data layout");
_Static_assert(_Alignof(uint64_t) == 8, "non-wasi data layout");
_Static_assert(_Alignof(intptr_t) == 4, "non-wasi data layout");
_Static_assert(_Alignof(uintptr_t) == 4, "non-wasi data layout");
_Static_assert(_Alignof(void*) == 4, "non-wasi data layout");
typedef int32_t __wasi_int_t;
typedef uint32_t __wasi_uint_t;
_Static_assert(_Alignof(__wasi_int_t) == 4, "non-wasi data layout");
_Static_assert(_Alignof(__wasi_uint_t) == 4, "non-wasi data layout");
#ifdef __cplusplus
extern "C" {
#endif

// TODO: Encoding this in witx.
#define __WASI_DIRCOOKIE_START (UINT64_C(0))
/**
 * Represents the length of a piece of data referenced by a pointer
 */
typedef __wasi_uint_t __wasi_pointersize_t;

_Static_assert(sizeof(__wasi_pointersize_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_pointersize_t) == 4, "witx calculated align");

/**
 * Represents a number of items
 */
typedef uint32_t __wasi_size_t;

_Static_assert(sizeof(__wasi_size_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_size_t) == 4, "witx calculated align");

/**
 * Non-negative file size or length of a region within a file.
 */
typedef uint64_t __wasi_filesize_t;

_Static_assert(sizeof(__wasi_filesize_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_filesize_t) == 8, "witx calculated align");

/**
 * Timestamp in nanoseconds.
 */
typedef uint64_t __wasi_timestamp_t;

_Static_assert(sizeof(__wasi_timestamp_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_timestamp_t) == 8, "witx calculated align");

/**
 * Identifiers for clocks.
 */
typedef uint32_t __wasi_clockid_t;

/**
 * The clock measuring real time. Time value zero corresponds with
 * 1970-01-01T00:00:00Z.
 */
#define __WASI_CLOCKID_REALTIME (UINT32_C(0))

/**
 * The store-wide monotonic clock, which is defined as a clock measuring
 * real time, whose value cannot be adjusted and which cannot have negative
 * clock jumps. The epoch of this clock is undefined. The absolute time
 * value of this clock therefore has no meaning.
 */
#define __WASI_CLOCKID_MONOTONIC (UINT32_C(1))

/**
 * The CPU-time clock associated with the current process.
 */
#define __WASI_CLOCKID_PROCESS_CPUTIME_ID (UINT32_C(2))

/**
 * The CPU-time clock associated with the current thread.
 */
#define __WASI_CLOCKID_THREAD_CPUTIME_ID (UINT32_C(3))

_Static_assert(sizeof(__wasi_clockid_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_clockid_t) == 4, "witx calculated align");

/**
 * Error codes returned by functions.
 * Not all of these error codes are returned by the functions provided by this
 * API; some are used in higher-level library layers, and others are provided
 * merely for alignment with POSIX.
 */
typedef uint16_t __wasi_errno_t;

/**
 * No error occurred. System call completed successfully.
 */
#define __WASI_ERRNO_SUCCESS (UINT16_C(0))

/**
 * Argument list too long.
 */
#define __WASI_ERRNO_2BIG (UINT16_C(1))

/**
 * Permission denied.
 */
#define __WASI_ERRNO_ACCES (UINT16_C(2))

/**
 * Address in use.
 */
#define __WASI_ERRNO_ADDRINUSE (UINT16_C(3))

/**
 * Address not available.
 */
#define __WASI_ERRNO_ADDRNOTAVAIL (UINT16_C(4))

/**
 * Address family not supported.
 */
#define __WASI_ERRNO_AFNOSUPPORT (UINT16_C(5))

/**
 * Resource unavailable, or operation would block.
 */
#define __WASI_ERRNO_AGAIN (UINT16_C(6))

/**
 * Connection already in progress.
 */
#define __WASI_ERRNO_ALREADY (UINT16_C(7))

/**
 * Bad file descriptor.
 */
#define __WASI_ERRNO_BADF (UINT16_C(8))

/**
 * Bad message.
 */
#define __WASI_ERRNO_BADMSG (UINT16_C(9))

/**
 * Device or resource busy.
 */
#define __WASI_ERRNO_BUSY (UINT16_C(10))

/**
 * Operation canceled.
 */
#define __WASI_ERRNO_CANCELED (UINT16_C(11))

/**
 * No child processes.
 */
#define __WASI_ERRNO_CHILD (UINT16_C(12))

/**
 * Connection aborted.
 */
#define __WASI_ERRNO_CONNABORTED (UINT16_C(13))

/**
 * Connection refused.
 */
#define __WASI_ERRNO_CONNREFUSED (UINT16_C(14))

/**
 * Connection reset.
 */
#define __WASI_ERRNO_CONNRESET (UINT16_C(15))

/**
 * Resource deadlock would occur.
 */
#define __WASI_ERRNO_DEADLK (UINT16_C(16))

/**
 * Destination address required.
 */
#define __WASI_ERRNO_DESTADDRREQ (UINT16_C(17))

/**
 * Mathematics argument out of domain of function.
 */
#define __WASI_ERRNO_DOM (UINT16_C(18))

/**
 * Reserved.
 */
#define __WASI_ERRNO_DQUOT (UINT16_C(19))

/**
 * File exists.
 */
#define __WASI_ERRNO_EXIST (UINT16_C(20))

/**
 * Bad address.
 */
#define __WASI_ERRNO_FAULT (UINT16_C(21))

/**
 * File too large.
 */
#define __WASI_ERRNO_FBIG (UINT16_C(22))

/**
 * Host is unreachable.
 */
#define __WASI_ERRNO_HOSTUNREACH (UINT16_C(23))

/**
 * Identifier removed.
 */
#define __WASI_ERRNO_IDRM (UINT16_C(24))

/**
 * Illegal byte sequence.
 */
#define __WASI_ERRNO_ILSEQ (UINT16_C(25))

/**
 * Operation in progress.
 */
#define __WASI_ERRNO_INPROGRESS (UINT16_C(26))

/**
 * Interrupted function.
 */
#define __WASI_ERRNO_INTR (UINT16_C(27))

/**
 * Invalid argument.
 */
#define __WASI_ERRNO_INVAL (UINT16_C(28))

/**
 * I/O error.
 */
#define __WASI_ERRNO_IO (UINT16_C(29))

/**
 * Socket is connected.
 */
#define __WASI_ERRNO_ISCONN (UINT16_C(30))

/**
 * Is a directory.
 */
#define __WASI_ERRNO_ISDIR (UINT16_C(31))

/**
 * Too many levels of symbolic links.
 */
#define __WASI_ERRNO_LOOP (UINT16_C(32))

/**
 * File descriptor value too large.
 */
#define __WASI_ERRNO_MFILE (UINT16_C(33))

/**
 * Too many links.
 */
#define __WASI_ERRNO_MLINK (UINT16_C(34))

/**
 * Message too large.
 */
#define __WASI_ERRNO_MSGSIZE (UINT16_C(35))

/**
 * Reserved.
 */
#define __WASI_ERRNO_MULTIHOP (UINT16_C(36))

/**
 * Filename too long.
 */
#define __WASI_ERRNO_NAMETOOLONG (UINT16_C(37))

/**
 * Network is down.
 */
#define __WASI_ERRNO_NETDOWN (UINT16_C(38))

/**
 * Connection aborted by network.
 */
#define __WASI_ERRNO_NETRESET (UINT16_C(39))

/**
 * Network unreachable.
 */
#define __WASI_ERRNO_NETUNREACH (UINT16_C(40))

/**
 * Too many files open in system.
 */
#define __WASI_ERRNO_NFILE (UINT16_C(41))

/**
 * No buffer space available.
 */
#define __WASI_ERRNO_NOBUFS (UINT16_C(42))

/**
 * No such device.
 */
#define __WASI_ERRNO_NODEV (UINT16_C(43))

/**
 * No such file or directory.
 */
#define __WASI_ERRNO_NOENT (UINT16_C(44))

/**
 * Executable file format error.
 */
#define __WASI_ERRNO_NOEXEC (UINT16_C(45))

/**
 * No locks available.
 */
#define __WASI_ERRNO_NOLCK (UINT16_C(46))

/**
 * Reserved.
 */
#define __WASI_ERRNO_NOLINK (UINT16_C(47))

/**
 * Not enough space.
 */
#define __WASI_ERRNO_NOMEM (UINT16_C(48))

/**
 * No message of the desired type.
 */
#define __WASI_ERRNO_NOMSG (UINT16_C(49))

/**
 * Protocol not available.
 */
#define __WASI_ERRNO_NOPROTOOPT (UINT16_C(50))

/**
 * No space left on device.
 */
#define __WASI_ERRNO_NOSPC (UINT16_C(51))

/**
 * Function not supported.
 */
#define __WASI_ERRNO_NOSYS (UINT16_C(52))

/**
 * The socket is not connected.
 */
#define __WASI_ERRNO_NOTCONN (UINT16_C(53))

/**
 * Not a directory or a symbolic link to a directory.
 */
#define __WASI_ERRNO_NOTDIR (UINT16_C(54))

/**
 * Directory not empty.
 */
#define __WASI_ERRNO_NOTEMPTY (UINT16_C(55))

/**
 * State not recoverable.
 */
#define __WASI_ERRNO_NOTRECOVERABLE (UINT16_C(56))

/**
 * Not a socket.
 */
#define __WASI_ERRNO_NOTSOCK (UINT16_C(57))

/**
 * Not supported, or operation not supported on socket.
 */
#define __WASI_ERRNO_NOTSUP (UINT16_C(58))

/**
 * Inappropriate I/O control operation.
 */
#define __WASI_ERRNO_NOTTY (UINT16_C(59))

/**
 * No such device or address.
 */
#define __WASI_ERRNO_NXIO (UINT16_C(60))

/**
 * Value too large to be stored in data type.
 */
#define __WASI_ERRNO_OVERFLOW (UINT16_C(61))

/**
 * Previous owner died.
 */
#define __WASI_ERRNO_OWNERDEAD (UINT16_C(62))

/**
 * Operation not permitted.
 */
#define __WASI_ERRNO_PERM (UINT16_C(63))

/**
 * Broken pipe.
 */
#define __WASI_ERRNO_PIPE (UINT16_C(64))

/**
 * Protocol error.
 */
#define __WASI_ERRNO_PROTO (UINT16_C(65))

/**
 * Protocol not supported.
 */
#define __WASI_ERRNO_PROTONOSUPPORT (UINT16_C(66))

/**
 * Protocol wrong type for socket.
 */
#define __WASI_ERRNO_PROTOTYPE (UINT16_C(67))

/**
 * Result too large.
 */
#define __WASI_ERRNO_RANGE (UINT16_C(68))

/**
 * Read-only file system.
 */
#define __WASI_ERRNO_ROFS (UINT16_C(69))

/**
 * Invalid seek.
 */
#define __WASI_ERRNO_SPIPE (UINT16_C(70))

/**
 * No such process.
 */
#define __WASI_ERRNO_SRCH (UINT16_C(71))

/**
 * Reserved.
 */
#define __WASI_ERRNO_STALE (UINT16_C(72))

/**
 * Connection timed out.
 */
#define __WASI_ERRNO_TIMEDOUT (UINT16_C(73))

/**
 * Text file busy.
 */
#define __WASI_ERRNO_TXTBSY (UINT16_C(74))

/**
 * Cross-device link.
 */
#define __WASI_ERRNO_XDEV (UINT16_C(75))

/**
 * Extension: Capabilities insufficient.
 */
#define __WASI_ERRNO_NOTCAPABLE (UINT16_C(76))

_Static_assert(sizeof(__wasi_errno_t) == 2, "witx calculated size");
_Static_assert(_Alignof(__wasi_errno_t) == 2, "witx calculated align");

/**
 * File descriptor rights, determining which actions may be performed.
 */
typedef uint64_t __wasi_rights_t;

/**
 * The right to invoke `fd_datasync`.
 * If `path_open` is set, includes the right to invoke
 * `path_open` with `fdflags::dsync`.
 */
#define __WASI_RIGHTS_FD_DATASYNC ((__wasi_rights_t)(1 << 0))

/**
 * The right to invoke `fd_read` and `sock_recv`.
 * If `rights::fd_seek` is set, includes the right to invoke `fd_pread`.
 */
#define __WASI_RIGHTS_FD_READ ((__wasi_rights_t)(1 << 1))

/**
 * The right to invoke `fd_seek`. This flag implies `rights::fd_tell`.
 */
#define __WASI_RIGHTS_FD_SEEK ((__wasi_rights_t)(1 << 2))

/**
 * The right to invoke `fd_fdstat_set_flags`.
 */
#define __WASI_RIGHTS_FD_FDSTAT_SET_FLAGS ((__wasi_rights_t)(1 << 3))

/**
 * The right to invoke `fd_sync`.
 * If `path_open` is set, includes the right to invoke
 * `path_open` with `fdflags::rsync` and `fdflags::dsync`.
 */
#define __WASI_RIGHTS_FD_SYNC ((__wasi_rights_t)(1 << 4))

/**
 * The right to invoke `fd_seek` in such a way that the file offset
 * remains unaltered (i.e., `whence::cur` with offset zero), or to
 * invoke `fd_tell`.
 */
#define __WASI_RIGHTS_FD_TELL ((__wasi_rights_t)(1 << 5))

/**
 * The right to invoke `fd_write` and `sock_send`.
 * If `rights::fd_seek` is set, includes the right to invoke `fd_pwrite`.
 */
#define __WASI_RIGHTS_FD_WRITE ((__wasi_rights_t)(1 << 6))

/**
 * The right to invoke `fd_advise`.
 */
#define __WASI_RIGHTS_FD_ADVISE ((__wasi_rights_t)(1 << 7))

/**
 * The right to invoke `fd_allocate`.
 */
#define __WASI_RIGHTS_FD_ALLOCATE ((__wasi_rights_t)(1 << 8))

/**
 * The right to invoke `path_create_directory`.
 */
#define __WASI_RIGHTS_PATH_CREATE_DIRECTORY ((__wasi_rights_t)(1 << 9))

/**
 * If `path_open` is set, the right to invoke `path_open` with `oflags::creat`.
 */
#define __WASI_RIGHTS_PATH_CREATE_FILE ((__wasi_rights_t)(1 << 10))

/**
 * The right to invoke `path_link` with the file descriptor as the
 * source directory.
 */
#define __WASI_RIGHTS_PATH_LINK_SOURCE ((__wasi_rights_t)(1 << 11))

/**
 * The right to invoke `path_link` with the file descriptor as the
 * target directory.
 */
#define __WASI_RIGHTS_PATH_LINK_TARGET ((__wasi_rights_t)(1 << 12))

/**
 * The right to invoke `path_open`.
 */
#define __WASI_RIGHTS_PATH_OPEN ((__wasi_rights_t)(1 << 13))

/**
 * The right to invoke `fd_readdir`.
 */
#define __WASI_RIGHTS_FD_READDIR ((__wasi_rights_t)(1 << 14))

/**
 * The right to invoke `path_readlink`.
 */
#define __WASI_RIGHTS_PATH_READLINK ((__wasi_rights_t)(1 << 15))

/**
 * The right to invoke `path_rename` with the file descriptor as the source directory.
 */
#define __WASI_RIGHTS_PATH_RENAME_SOURCE ((__wasi_rights_t)(1 << 16))

/**
 * The right to invoke `path_rename` with the file descriptor as the target directory.
 */
#define __WASI_RIGHTS_PATH_RENAME_TARGET ((__wasi_rights_t)(1 << 17))

/**
 * The right to invoke `path_filestat_get`.
 */
#define __WASI_RIGHTS_PATH_FILESTAT_GET ((__wasi_rights_t)(1 << 18))

/**
 * The right to change a file's size (there is no `path_filestat_set_size`).
 * If `path_open` is set, includes the right to invoke `path_open` with `oflags::trunc`.
 */
#define __WASI_RIGHTS_PATH_FILESTAT_SET_SIZE ((__wasi_rights_t)(1 << 19))

/**
 * The right to invoke `path_filestat_set_times`.
 */
#define __WASI_RIGHTS_PATH_FILESTAT_SET_TIMES ((__wasi_rights_t)(1 << 20))

/**
 * The right to invoke `fd_filestat_get`.
 */
#define __WASI_RIGHTS_FD_FILESTAT_GET ((__wasi_rights_t)(1 << 21))

/**
 * The right to invoke `fd_filestat_set_size`.
 */
#define __WASI_RIGHTS_FD_FILESTAT_SET_SIZE ((__wasi_rights_t)(1 << 22))

/**
 * The right to invoke `fd_filestat_set_times`.
 */
#define __WASI_RIGHTS_FD_FILESTAT_SET_TIMES ((__wasi_rights_t)(1 << 23))

/**
 * The right to invoke `path_symlink`.
 */
#define __WASI_RIGHTS_PATH_SYMLINK ((__wasi_rights_t)(1 << 24))

/**
 * The right to invoke `path_remove_directory`.
 */
#define __WASI_RIGHTS_PATH_REMOVE_DIRECTORY ((__wasi_rights_t)(1 << 25))

/**
 * The right to invoke `path_unlink_file`.
 */
#define __WASI_RIGHTS_PATH_UNLINK_FILE ((__wasi_rights_t)(1 << 26))

/**
 * If `rights::fd_read` is set, includes the right to invoke `poll_oneoff` to subscribe to `eventtype::fd_read`.
 * If `rights::fd_write` is set, includes the right to invoke `poll_oneoff` to subscribe to `eventtype::fd_write`.
 */
#define __WASI_RIGHTS_POLL_FD_READWRITE ((__wasi_rights_t)(1 << 27))

/**
 * The right to invoke `sock_shutdown`.
 */
#define __WASI_RIGHTS_SOCK_SHUTDOWN ((__wasi_rights_t)(1 << 28))

/**
 * Accept incoming connection
 */
#define __WASI_RIGHTS_SOCK_ACCEPT ((__wasi_rights_t)(1 << 29))

/**
 * Connect to an address
 */
#define __WASI_RIGHTS_SOCK_CONNECT ((__wasi_rights_t)(1 << 30))

/**
 * Listen for incoming connection on an address
 */
#define __WASI_RIGHTS_SOCK_LISTEN ((__wasi_rights_t)(1 << 31))

/**
 * Bind an address to a socket
 */
#define __WASI_RIGHTS_SOCK_BIND ((__wasi_rights_t)(1 << 32))

/**
 * Receive data on a socket
 */
#define __WASI_RIGHTS_SOCK_RECV ((__wasi_rights_t)(1 << 33))

/**
 * Send data on a socket
 */
#define __WASI_RIGHTS_SOCK_SEND ((__wasi_rights_t)(1 << 34))

/**
 * Retrieve locally bound address on a socket
 */
#define __WASI_RIGHTS_SOCK_ADDR_LOCAL ((__wasi_rights_t)(1 << 35))

/**
 * Retrieve remote address on a socket
 */
#define __WASI_RIGHTS_SOCK_ADDR_REMOTE ((__wasi_rights_t)(1 << 36))

/**
 * Receive datagram on a socket
 */
#define __WASI_RIGHTS_SOCK_RECV_FROM ((__wasi_rights_t)(1 << 37))

/**
 * Send datagram on a socket
 */
#define __WASI_RIGHTS_SOCK_SEND_TO ((__wasi_rights_t)(1 << 38))

/**
 * Option type
 */
typedef uint8_t __wasi_option_t;

#define __WASI_OPTION_NONE (UINT8_C(0))

#define __WASI_OPTION_SOME (UINT8_C(1))

_Static_assert(sizeof(__wasi_option_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_option_t) == 1, "witx calculated align");

/**
 * Represents an optional timestamp
 */
typedef union __wasi_option_timestamp_u_t {
    uint8_t none;
    __wasi_timestamp_t some;
} __wasi_option_timestamp_u_t;
typedef struct __wasi_option_timestamp_t {
    uint8_t tag;
    __wasi_option_timestamp_u_t u;
} __wasi_option_timestamp_t;

_Static_assert(sizeof(__wasi_option_timestamp_t) == 16, "witx calculated size");
_Static_assert(_Alignof(__wasi_option_timestamp_t) == 8, "witx calculated align");

/**
 * A file descriptor handle.
 */
typedef int __wasi_fd_t;

_Static_assert(sizeof(__wasi_fd_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_fd_t) == 4, "witx calculated align");

/**
 * A process descriptor handle.
 */
typedef int __wasi_pid_t;

_Static_assert(sizeof(__wasi_pid_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_pid_t) == 4, "witx calculated align");

/**
 * A thread handle
 */
typedef int __wasi_tid_t;

_Static_assert(sizeof(__wasi_tid_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_tid_t) == 4, "witx calculated align");

/**
 * A bus process handle
 */
typedef int __wasi_bid_t;

_Static_assert(sizeof(__wasi_bid_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_bid_t) == 4, "witx calculated align");

/**
 * Represents an optional bus process
 */
typedef union __wasi_option_bid_u_t {
    uint8_t none;
    __wasi_bid_t some;
} __wasi_option_bid_u_t;
typedef struct __wasi_option_bid_t {
    uint8_t tag;
    __wasi_option_bid_u_t u;
} __wasi_option_bid_t;

_Static_assert(sizeof(__wasi_option_bid_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_option_bid_t) == 4, "witx calculated align");

/**
 * A bus call handle
 */
typedef int __wasi_cid_t;

_Static_assert(sizeof(__wasi_cid_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_cid_t) == 4, "witx calculated align");

/**
 * Represents an optional call handle
 */
typedef union __wasi_option_cid_u_t {
    uint8_t none;
    __wasi_cid_t some;
} __wasi_option_cid_u_t;
typedef struct __wasi_option_cid_t {
    uint8_t tag;
    __wasi_option_cid_u_t u;
} __wasi_option_cid_t;

_Static_assert(sizeof(__wasi_option_cid_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_option_cid_t) == 4, "witx calculated align");

/**
 * Bool type
 */
typedef uint8_t __wasi_bool_t;

#define __WASI_BOOL_FALSE (UINT8_C(0))

#define __WASI_BOOL_TRUE (UINT8_C(1))

_Static_assert(sizeof(__wasi_bool_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_bool_t) == 1, "witx calculated align");

/**
 * A region of memory for scatter/gather reads.
 */
typedef struct __wasi_iovec_t {
    /**
     * The address of the buffer to be filled.
     */
    uint8_t * buf;

    /**
     * The length of the buffer to be filled.
     */
    __wasi_pointersize_t buf_len;

} __wasi_iovec_t;

_Static_assert(sizeof(__wasi_iovec_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_iovec_t) == 4, "witx calculated align");
_Static_assert(offsetof(__wasi_iovec_t, buf) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_iovec_t, buf_len) == 4, "witx calculated offset");

/**
 * A region of memory for scatter/gather writes.
 */
typedef struct __wasi_ciovec_t {
    /**
     * The address of the buffer to be written.
     */
    const uint8_t * buf;

    /**
     * The length of the buffer to be written.
     */
    __wasi_pointersize_t buf_len;

} __wasi_ciovec_t;

_Static_assert(sizeof(__wasi_ciovec_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_ciovec_t) == 4, "witx calculated align");
_Static_assert(offsetof(__wasi_ciovec_t, buf) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_ciovec_t, buf_len) == 4, "witx calculated offset");

/**
 * Relative offset within a file.
 */
typedef int64_t __wasi_filedelta_t;

_Static_assert(sizeof(__wasi_filedelta_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_filedelta_t) == 8, "witx calculated align");

/**
 * The position relative to which to set the offset of the file descriptor.
 */
typedef uint8_t __wasi_whence_t;

/**
 * Seek relative to start-of-file.
 */
#define __WASI_WHENCE_SET (UINT8_C(0))

/**
 * Seek relative to current position.
 */
#define __WASI_WHENCE_CUR (UINT8_C(1))

/**
 * Seek relative to end-of-file.
 */
#define __WASI_WHENCE_END (UINT8_C(2))

_Static_assert(sizeof(__wasi_whence_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_whence_t) == 1, "witx calculated align");

/**
 * A reference to the offset of a directory entry.
 * 
 * The value 0 signifies the start of the directory.
 */
typedef uint64_t __wasi_dircookie_t;

_Static_assert(sizeof(__wasi_dircookie_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_dircookie_t) == 8, "witx calculated align");

/**
 * The type for the `dirent::d_namlen` field of `dirent` struct.
 */
typedef uint32_t __wasi_dirnamlen_t;

_Static_assert(sizeof(__wasi_dirnamlen_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_dirnamlen_t) == 4, "witx calculated align");

/**
 * File serial number that is unique within its file system.
 */
typedef uint64_t __wasi_inode_t;

_Static_assert(sizeof(__wasi_inode_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_inode_t) == 8, "witx calculated align");

/**
 * The type of a file descriptor or file.
 */
typedef uint8_t __wasi_filetype_t;

/**
 * The type of the file descriptor or file is unknown or is different from any of the other types specified.
 */
#define __WASI_FILETYPE_UNKNOWN (UINT8_C(0))

/**
 * The file descriptor or file refers to a block device inode.
 */
#define __WASI_FILETYPE_BLOCK_DEVICE (UINT8_C(1))

/**
 * The file descriptor or file refers to a character device inode.
 */
#define __WASI_FILETYPE_CHARACTER_DEVICE (UINT8_C(2))

/**
 * The file descriptor or file refers to a directory inode.
 */
#define __WASI_FILETYPE_DIRECTORY (UINT8_C(3))

/**
 * The file descriptor or file refers to a regular file inode.
 */
#define __WASI_FILETYPE_REGULAR_FILE (UINT8_C(4))

/**
 * The file descriptor or file refers to a datagram socket.
 */
#define __WASI_FILETYPE_SOCKET_DGRAM (UINT8_C(5))

/**
 * The file descriptor or file refers to a byte-stream socket.
 */
#define __WASI_FILETYPE_SOCKET_STREAM (UINT8_C(6))

/**
 * The file refers to a symbolic link inode.
 */
#define __WASI_FILETYPE_SYMBOLIC_LINK (UINT8_C(7))

_Static_assert(sizeof(__wasi_filetype_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_filetype_t) == 1, "witx calculated align");

/**
 * A directory entry.
 */
typedef struct __wasi_dirent_t {
    /**
     * The offset of the next directory entry stored in this directory.
     */
    __wasi_dircookie_t d_next;

    /**
     * The serial number of the file referred to by this directory entry.
     */
    __wasi_inode_t d_ino;

    /**
     * The length of the name of the directory entry.
     */
    __wasi_dirnamlen_t d_namlen;

    /**
     * The type of the file referred to by this directory entry.
     */
    __wasi_filetype_t d_type;

} __wasi_dirent_t;

_Static_assert(sizeof(__wasi_dirent_t) == 24, "witx calculated size");
_Static_assert(_Alignof(__wasi_dirent_t) == 8, "witx calculated align");
_Static_assert(offsetof(__wasi_dirent_t, d_next) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_dirent_t, d_ino) == 8, "witx calculated offset");
_Static_assert(offsetof(__wasi_dirent_t, d_namlen) == 16, "witx calculated offset");
_Static_assert(offsetof(__wasi_dirent_t, d_type) == 20, "witx calculated offset");

/**
 * File or memory access pattern advisory information.
 */
typedef uint8_t __wasi_advice_t;

/**
 * The application has no advice to give on its behavior with respect to the specified data.
 */
#define __WASI_ADVICE_NORMAL (UINT8_C(0))

/**
 * The application expects to access the specified data sequentially from lower offsets to higher offsets.
 */
#define __WASI_ADVICE_SEQUENTIAL (UINT8_C(1))

/**
 * The application expects to access the specified data in a random order.
 */
#define __WASI_ADVICE_RANDOM (UINT8_C(2))

/**
 * The application expects to access the specified data in the near future.
 */
#define __WASI_ADVICE_WILLNEED (UINT8_C(3))

/**
 * The application expects that it will not access the specified data in the near future.
 */
#define __WASI_ADVICE_DONTNEED (UINT8_C(4))

/**
 * The application expects to access the specified data once and then not reuse it thereafter.
 */
#define __WASI_ADVICE_NOREUSE (UINT8_C(5))

_Static_assert(sizeof(__wasi_advice_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_advice_t) == 1, "witx calculated align");

/**
 * File descriptor flags.
 */
typedef uint16_t __wasi_fdflags_t;

/**
 * Append mode: Data written to the file is always appended to the file's end.
 */
#define __WASI_FDFLAGS_APPEND ((__wasi_fdflags_t)(1 << 0))

/**
 * Write according to synchronized I/O data integrity completion. Only the data stored in the file is synchronized.
 */
#define __WASI_FDFLAGS_DSYNC ((__wasi_fdflags_t)(1 << 1))

/**
 * Non-blocking mode.
 */
#define __WASI_FDFLAGS_NONBLOCK ((__wasi_fdflags_t)(1 << 2))

/**
 * Synchronized read I/O operations.
 */
#define __WASI_FDFLAGS_RSYNC ((__wasi_fdflags_t)(1 << 3))

/**
 * Write according to synchronized I/O file integrity completion. In
 * addition to synchronizing the data stored in the file, the implementation
 * may also synchronously update the file's metadata.
 */
#define __WASI_FDFLAGS_SYNC ((__wasi_fdflags_t)(1 << 4))

/**
 * File descriptor attributes.
 */
typedef struct __wasi_fdstat_t {
    /**
     * File type.
     */
    __wasi_filetype_t fs_filetype;

    /**
     * File descriptor flags.
     */
    __wasi_fdflags_t fs_flags;

    /**
     * Rights that apply to this file descriptor.
     */
    __wasi_rights_t fs_rights_base;

    /**
     * Maximum set of rights that may be installed on new file descriptors that
     * are created through this file descriptor, e.g., through `path_open`.
     */
    __wasi_rights_t fs_rights_inheriting;

} __wasi_fdstat_t;

_Static_assert(sizeof(__wasi_fdstat_t) == 24, "witx calculated size");
_Static_assert(_Alignof(__wasi_fdstat_t) == 8, "witx calculated align");
_Static_assert(offsetof(__wasi_fdstat_t, fs_filetype) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_fdstat_t, fs_flags) == 2, "witx calculated offset");
_Static_assert(offsetof(__wasi_fdstat_t, fs_rights_base) == 8, "witx calculated offset");
_Static_assert(offsetof(__wasi_fdstat_t, fs_rights_inheriting) == 16, "witx calculated offset");

/**
 * Identifier for a device containing a file system. Can be used in combination
 * with `inode` to uniquely identify a file or directory in the filesystem.
 */
typedef uint64_t __wasi_device_t;

_Static_assert(sizeof(__wasi_device_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_device_t) == 8, "witx calculated align");

/**
 * Which file time attributes to adjust.
 */
typedef uint16_t __wasi_fstflags_t;

/**
 * Adjust the last data access timestamp to the value stored in `filestat::atim`.
 */
#define __WASI_FSTFLAGS_ATIM ((__wasi_fstflags_t)(1 << 0))

/**
 * Adjust the last data access timestamp to the time of clock `clockid::realtime`.
 */
#define __WASI_FSTFLAGS_ATIM_NOW ((__wasi_fstflags_t)(1 << 1))

/**
 * Adjust the last data modification timestamp to the value stored in `filestat::mtim`.
 */
#define __WASI_FSTFLAGS_MTIM ((__wasi_fstflags_t)(1 << 2))

/**
 * Adjust the last data modification timestamp to the time of clock `clockid::realtime`.
 */
#define __WASI_FSTFLAGS_MTIM_NOW ((__wasi_fstflags_t)(1 << 3))

/**
 * Flags determining the method of how paths are resolved.
 */
typedef uint32_t __wasi_lookupflags_t;

/**
 * As long as the resolved path corresponds to a symbolic link, it is expanded.
 */
#define __WASI_LOOKUPFLAGS_SYMLINK_FOLLOW ((__wasi_lookupflags_t)(1 << 0))

/**
 * Open flags used by `path_open`.
 */
typedef uint16_t __wasi_oflags_t;

/**
 * Create file if it does not exist.
 */
#define __WASI_OFLAGS_CREAT ((__wasi_oflags_t)(1 << 0))

/**
 * Fail if not a directory.
 */
#define __WASI_OFLAGS_DIRECTORY ((__wasi_oflags_t)(1 << 1))

/**
 * Fail if file already exists.
 */
#define __WASI_OFLAGS_EXCL ((__wasi_oflags_t)(1 << 2))

/**
 * Truncate file to size 0.
 */
#define __WASI_OFLAGS_TRUNC ((__wasi_oflags_t)(1 << 3))

/**
 * Number of hard links to an inode.
 */
typedef uint64_t __wasi_linkcount_t;

_Static_assert(sizeof(__wasi_linkcount_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_linkcount_t) == 8, "witx calculated align");

/**
 * File attributes.
 */
typedef struct __wasi_filestat_t {
    /**
     * Device ID of device containing the file.
     */
    __wasi_device_t dev;

    /**
     * File serial number.
     */
    __wasi_inode_t ino;

    /**
     * File type.
     */
    __wasi_filetype_t filetype;

    /**
     * Number of hard links to the file.
     */
    __wasi_linkcount_t nlink;

    /**
     * For regular files, the file size in bytes. For symbolic links, the length in bytes of the pathname contained in the symbolic link.
     */
    __wasi_filesize_t size;

    /**
     * Last data access timestamp.
     */
    __wasi_timestamp_t atim;

    /**
     * Last data modification timestamp.
     */
    __wasi_timestamp_t mtim;

    /**
     * Last file status change timestamp.
     */
    __wasi_timestamp_t ctim;

} __wasi_filestat_t;

_Static_assert(sizeof(__wasi_filestat_t) == 64, "witx calculated size");
_Static_assert(_Alignof(__wasi_filestat_t) == 8, "witx calculated align");
_Static_assert(offsetof(__wasi_filestat_t, dev) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_filestat_t, ino) == 8, "witx calculated offset");
_Static_assert(offsetof(__wasi_filestat_t, filetype) == 16, "witx calculated offset");
_Static_assert(offsetof(__wasi_filestat_t, nlink) == 24, "witx calculated offset");
_Static_assert(offsetof(__wasi_filestat_t, size) == 32, "witx calculated offset");
_Static_assert(offsetof(__wasi_filestat_t, atim) == 40, "witx calculated offset");
_Static_assert(offsetof(__wasi_filestat_t, mtim) == 48, "witx calculated offset");
_Static_assert(offsetof(__wasi_filestat_t, ctim) == 56, "witx calculated offset");

/**
 * User-provided value that may be attached to objects that is retained when
 * extracted from the implementation.
 */
typedef uint64_t __wasi_userdata_t;

_Static_assert(sizeof(__wasi_userdata_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_userdata_t) == 8, "witx calculated align");

/**
 * Type of a subscription to an event or its occurrence.
 */
typedef uint8_t __wasi_eventtype_t;

/**
 * The time value of clock `subscription_clock::id` has
 * reached timestamp `subscription_clock::timeout`.
 */
#define __WASI_EVENTTYPE_CLOCK (UINT8_C(0))

/**
 * File descriptor `subscription_fd_readwrite::file_descriptor` has data
 * available for reading. This event always triggers for regular files.
 */
#define __WASI_EVENTTYPE_FD_READ (UINT8_C(1))

/**
 * File descriptor `subscription_fd_readwrite::file_descriptor` has capacity
 * available for writing. This event always triggers for regular files.
 */
#define __WASI_EVENTTYPE_FD_WRITE (UINT8_C(2))

_Static_assert(sizeof(__wasi_eventtype_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_eventtype_t) == 1, "witx calculated align");

/**
 * The state of the file descriptor subscribed to with
 * `eventtype::fd_read` or `eventtype::fd_write`.
 */
typedef uint16_t __wasi_eventrwflags_t;

/**
 * The peer of this socket has closed or disconnected.
 */
#define __WASI_EVENTRWFLAGS_FD_READWRITE_HANGUP ((__wasi_eventrwflags_t)(1 << 0))

/**
 * The contents of an `event` when type is `eventtype::fd_read` or
 * `eventtype::fd_write`.
 */
typedef struct __wasi_event_fd_readwrite_t {
    /**
     * The number of bytes available for reading or writing.
     */
    __wasi_filesize_t nbytes;

    /**
     * The state of the file descriptor.
     */
    __wasi_eventrwflags_t flags;

} __wasi_event_fd_readwrite_t;

_Static_assert(sizeof(__wasi_event_fd_readwrite_t) == 16, "witx calculated size");
_Static_assert(_Alignof(__wasi_event_fd_readwrite_t) == 8, "witx calculated align");
_Static_assert(offsetof(__wasi_event_fd_readwrite_t, nbytes) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_event_fd_readwrite_t, flags) == 8, "witx calculated offset");

/**
 * An event that occurred.
 */
typedef struct __wasi_event_t {
    /**
     * User-provided value that got attached to `subscription::userdata`.
     */
    __wasi_userdata_t userdata;

    /**
     * If non-zero, an error that occurred while processing the subscription request.
     */
    __wasi_errno_t error;

    /**
     * The type of event that occured
     */
    __wasi_eventtype_t type;

    /**
     * The contents of the event, if it is an `eventtype::fd_read` or
     * `eventtype::fd_write`. `eventtype::clock` events ignore this field.
     */
    __wasi_event_fd_readwrite_t fd_readwrite;

} __wasi_event_t;

_Static_assert(sizeof(__wasi_event_t) == 32, "witx calculated size");
_Static_assert(_Alignof(__wasi_event_t) == 8, "witx calculated align");
_Static_assert(offsetof(__wasi_event_t, userdata) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_event_t, error) == 8, "witx calculated offset");
_Static_assert(offsetof(__wasi_event_t, type) == 10, "witx calculated offset");
_Static_assert(offsetof(__wasi_event_t, fd_readwrite) == 16, "witx calculated offset");

/**
 * Flags determining how to interpret the timestamp provided in
 * `subscription_clock::timeout`.
 */
typedef uint16_t __wasi_subclockflags_t;

/**
 * If set, treat the timestamp provided in
 * `subscription_clock::timeout` as an absolute timestamp of clock
 * `subscription_clock::id`. If clear, treat the timestamp
 * provided in `subscription_clock::timeout` relative to the
 * current time value of clock `subscription_clock::id`.
 */
#define __WASI_SUBCLOCKFLAGS_SUBSCRIPTION_CLOCK_ABSTIME ((__wasi_subclockflags_t)(1 << 0))

/**
 * The contents of a `subscription` when type is `eventtype::clock`.
 */
typedef struct __wasi_subscription_clock_t {
    /**
     * The clock against which to compare the timestamp.
     */
    __wasi_clockid_t id;

    /**
     * The absolute or relative timestamp.
     */
    __wasi_timestamp_t timeout;

    /**
     * The amount of time that the implementation may wait additionally
     * to coalesce with other events.
     */
    __wasi_timestamp_t precision;

    /**
     * Flags specifying whether the timeout is absolute or relative
     */
    __wasi_subclockflags_t flags;

} __wasi_subscription_clock_t;

_Static_assert(sizeof(__wasi_subscription_clock_t) == 32, "witx calculated size");
_Static_assert(_Alignof(__wasi_subscription_clock_t) == 8, "witx calculated align");
_Static_assert(offsetof(__wasi_subscription_clock_t, id) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_subscription_clock_t, timeout) == 8, "witx calculated offset");
_Static_assert(offsetof(__wasi_subscription_clock_t, precision) == 16, "witx calculated offset");
_Static_assert(offsetof(__wasi_subscription_clock_t, flags) == 24, "witx calculated offset");

/**
 * The contents of a `subscription` when type is type is
 * `eventtype::fd_read` or `eventtype::fd_write`.
 */
typedef struct __wasi_subscription_fd_readwrite_t {
    /**
     * The file descriptor on which to wait for it to become ready for reading or writing.
     */
    __wasi_fd_t file_descriptor;

} __wasi_subscription_fd_readwrite_t;

_Static_assert(sizeof(__wasi_subscription_fd_readwrite_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_subscription_fd_readwrite_t) == 4, "witx calculated align");
_Static_assert(offsetof(__wasi_subscription_fd_readwrite_t, file_descriptor) == 0, "witx calculated offset");

/**
 * The contents of a `subscription`.
 */
typedef union __wasi_subscription_u_u_t {
    __wasi_subscription_clock_t clock;
    __wasi_subscription_fd_readwrite_t fd_read;
    __wasi_subscription_fd_readwrite_t fd_write;
} __wasi_subscription_u_u_t;
typedef struct __wasi_subscription_u_t {
    uint8_t tag;
    __wasi_subscription_u_u_t u;
} __wasi_subscription_u_t;

_Static_assert(sizeof(__wasi_subscription_u_t) == 40, "witx calculated size");
_Static_assert(_Alignof(__wasi_subscription_u_t) == 8, "witx calculated align");

/**
 * Subscription to an event.
 */
typedef struct __wasi_subscription_t {
    /**
     * User-provided value that is attached to the subscription in the
     * implementation and returned through `event::userdata`.
     */
    __wasi_userdata_t userdata;

    /**
     * The type of the event to which to subscribe, and its contents
     */
    __wasi_subscription_u_t u;

} __wasi_subscription_t;

_Static_assert(sizeof(__wasi_subscription_t) == 48, "witx calculated size");
_Static_assert(_Alignof(__wasi_subscription_t) == 8, "witx calculated align");
_Static_assert(offsetof(__wasi_subscription_t, userdata) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_subscription_t, u) == 8, "witx calculated offset");

/**
 * Exit code generated by a process when exiting.
 */
typedef uint32_t __wasi_exitcode_t;

_Static_assert(sizeof(__wasi_exitcode_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_exitcode_t) == 4, "witx calculated align");

/**
 * Rect that represents the TTY.
 */
typedef struct __wasi_tty_t {
    /**
     * Number of columns
     */
    uint32_t cols;

    /**
     * Number of rows
     */
    uint32_t rows;

    /**
     * Width of the screen in pixels
     */
    uint32_t width;

    /**
     * Height of the screen in pixels
     */
    uint32_t height;

    /**
     * Indicates if stdin is a TTY
     */
    __wasi_bool_t stdin_tty;

    /**
     * Indicates if stdout is a TTY
     */
    __wasi_bool_t stdout_tty;

    /**
     * Indicates if stderr is a TTY
     */
    __wasi_bool_t stderr_tty;

    /**
     * When enabled the TTY will echo input to console
     */
    __wasi_bool_t echo;

    /**
     * When enabled buffers the input until the return key is pressed
     */
    __wasi_bool_t line_buffered;

} __wasi_tty_t;

_Static_assert(sizeof(__wasi_tty_t) == 24, "witx calculated size");
_Static_assert(_Alignof(__wasi_tty_t) == 4, "witx calculated align");
_Static_assert(offsetof(__wasi_tty_t, cols) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_tty_t, rows) == 4, "witx calculated offset");
_Static_assert(offsetof(__wasi_tty_t, width) == 8, "witx calculated offset");
_Static_assert(offsetof(__wasi_tty_t, height) == 12, "witx calculated offset");
_Static_assert(offsetof(__wasi_tty_t, stdin_tty) == 16, "witx calculated offset");
_Static_assert(offsetof(__wasi_tty_t, stdout_tty) == 17, "witx calculated offset");
_Static_assert(offsetof(__wasi_tty_t, stderr_tty) == 18, "witx calculated offset");
_Static_assert(offsetof(__wasi_tty_t, echo) == 19, "witx calculated offset");
_Static_assert(offsetof(__wasi_tty_t, line_buffered) == 20, "witx calculated offset");

/**
 * Fault codes that can be raised on a bus session.
 */
typedef uint32_t __wasi_bus_error_t;

/**
 * operation successful
 */
#define __WASI_BUS_ERROR_SUCCESS (UINT32_C(0))

/**
 * there was an error while serializing the request or response.
 */
#define __WASI_BUS_ERROR_SERIALIZATION (UINT32_C(1))

/**
 * there was an error while deserializing the request or response.
 */
#define __WASI_BUS_ERROR_DESERIALIZATION (UINT32_C(2))

/**
 * the specified WAPM module does not exist.
 */
#define __WASI_BUS_ERROR_INVALID_WAPM (UINT32_C(3))

/**
 * failed to fetch the WAPM module.
 */
#define __WASI_BUS_ERROR_FETCH_WAPM (UINT32_C(4))

/**
 * failed to compile the WAPM module.
 */
#define __WASI_BUS_ERROR_COMPILE_ERROR (UINT32_C(5))

/**
 * the ABI is invalid for cross module calls.
 */
#define __WASI_BUS_ERROR_INVALID_ABI (UINT32_C(6))

/**
 * the request has been aborted.
 */
#define __WASI_BUS_ERROR_ABORTED (UINT32_C(7))

/**
 * the handle is not valid.
 */
#define __WASI_BUS_ERROR_INVALID_HANDLE (UINT32_C(8))

#define __WASI_BUS_ERROR_INVALID_TOPIC (UINT32_C(9))

/**
 * some mandatory callbacks were not registered.
 */
#define __WASI_BUS_ERROR_MISSING_CALLBACK (UINT32_C(10))

/**
 * this operation is not supported on this platform.
 */
#define __WASI_BUS_ERROR_UNSUPPORTED (UINT32_C(11))

/**
 * invalid input was supplied in the call resulting in a bad request.
 */
#define __WASI_BUS_ERROR_BAD_REQUEST (UINT32_C(12))

/**
 * access denied
 */
#define __WASI_BUS_ERROR_ACCESS_DENIED (UINT32_C(13))

/**
 * an internal failure has occured
 */
#define __WASI_BUS_ERROR_INTERNAL_FAILURE (UINT32_C(14))

/**
 * memory allocation has failed
 */
#define __WASI_BUS_ERROR_MEMORY_ALLOCATION_FAILED (UINT32_C(15))

/**
 * bus invocation has failed
 */
#define __WASI_BUS_ERROR_BUS_INVOCATION_FAILED (UINT32_C(16))

/**
 * result already consumed
 */
#define __WASI_BUS_ERROR_ALREADY_CONSUMED (UINT32_C(17))

/**
 * memory access violation
 */
#define __WASI_BUS_ERROR_MEMORY_ACCESS_VIOLATION (UINT32_C(18))

/**
 * unknown error
 */
#define __WASI_BUS_ERROR_UNKNOWN_ERROR (UINT32_C(19))

_Static_assert(sizeof(__wasi_bus_error_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_bus_error_t) == 4, "witx calculated align");

/**
 * Type of stdio mode to run for the sub process
 */
typedef uint8_t __wasi_stdio_mode_t;

/**
 * The stdio will be piped
 */
#define __WASI_STDIO_MODE_PIPED (UINT8_C(0))

/**
 * The stdio will inherit from its parent
 */
#define __WASI_STDIO_MODE_INHERIT (UINT8_C(1))

/**
 * The stdio will be dumped to null
 */
#define __WASI_STDIO_MODE_NULL (UINT8_C(2))

/**
 * The stdio will be written to the log file
 */
#define __WASI_STDIO_MODE_LOG (UINT8_C(3))

_Static_assert(sizeof(__wasi_stdio_mode_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_stdio_mode_t) == 1, "witx calculated align");

/**
 * Bus process handles.
 */
typedef struct __wasi_bus_handles_t {
    /**
     * Handle of the bus process
     */
    __wasi_bid_t handle;

    /**
     * File handle for STDIN
     */
    __wasi_fd_t stdin;

    /**
     * File handle for STDOUT
     */
    __wasi_fd_t stdout;

    /**
     * File handle for STDERR
     */
    __wasi_fd_t stderr;

} __wasi_bus_handles_t;

_Static_assert(sizeof(__wasi_bus_handles_t) == 16, "witx calculated size");
_Static_assert(_Alignof(__wasi_bus_handles_t) == 4, "witx calculated align");
_Static_assert(offsetof(__wasi_bus_handles_t, handle) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_bus_handles_t, stdin) == 4, "witx calculated offset");
_Static_assert(offsetof(__wasi_bus_handles_t, stdout) == 8, "witx calculated offset");
_Static_assert(offsetof(__wasi_bus_handles_t, stderr) == 12, "witx calculated offset");

/**
 * Bus process event.
 */
typedef struct __wasi_bus_event_exit_t {
    /**
     * Exit code of the bus process that has exited
     */
    __wasi_exitcode_t rval;

} __wasi_bus_event_exit_t;

_Static_assert(sizeof(__wasi_bus_event_exit_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_bus_event_exit_t) == 4, "witx calculated align");
_Static_assert(offsetof(__wasi_bus_event_exit_t, rval) == 0, "witx calculated offset");

/**
 * Type of a subscription to an event or its occurrence.
 */
typedef uint8_t __wasi_bus_data_type_t;

/**
 * The bus process has been invoked by a caller
 */
#define __WASI_BUS_DATA_TYPE_CALL (UINT8_C(0))

/**
 * Callback with some out-of-band data to the caller
 */
#define __WASI_BUS_DATA_TYPE_CALLBACK (UINT8_C(1))

/**
 * Call within the bus process has returned
 */
#define __WASI_BUS_DATA_TYPE_REPLY (UINT8_C(2))

_Static_assert(sizeof(__wasi_bus_data_type_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_bus_data_type_t) == 1, "witx calculated align");

/**
 * Serialization format of data on the bus
 */
typedef uint8_t __wasi_bus_data_format_t;

/**
 * Raw binary data
 */
#define __WASI_BUS_DATA_FORMAT_RAW (UINT8_C(0))

/**
 * Uses the bincode serializer
 */
#define __WASI_BUS_DATA_FORMAT_BINCODE (UINT8_C(1))

/**
 * Uses the message pack serializer
 */
#define __WASI_BUS_DATA_FORMAT_MESSAGE_PACK (UINT8_C(2))

/**
 * JSON
 */
#define __WASI_BUS_DATA_FORMAT_JSON (UINT8_C(3))

/**
 * YAML
 */
#define __WASI_BUS_DATA_FORMAT_YAML (UINT8_C(4))

/**
 * XML
 */
#define __WASI_BUS_DATA_FORMAT_XML (UINT8_C(5))

_Static_assert(sizeof(__wasi_bus_data_format_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_bus_data_format_t) == 1, "witx calculated align");

/**
 * Bus data for a callback, call or reply event.
 */
typedef struct __wasi_bus_event_data_t {
    /**
     * Type of event data that is held here
     */
    __wasi_bus_data_type_t ty;

    /**
     * Format of the data on the bus
     */
    __wasi_bus_data_format_t format;

    /**
     * Handle of the call that has made a callback
     */
    __wasi_cid_t cid;

    /**
     * The topic that describes the event that happened
     */
    __wasi_pointersize_t topic_len;

    /**
     * The buffer where event data is stored
     */
    __wasi_pointersize_t buf_len;

} __wasi_bus_event_data_t;

_Static_assert(sizeof(__wasi_bus_event_data_t) == 16, "witx calculated size");
_Static_assert(_Alignof(__wasi_bus_event_data_t) == 4, "witx calculated align");
_Static_assert(offsetof(__wasi_bus_event_data_t, ty) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_bus_event_data_t, format) == 1, "witx calculated offset");
_Static_assert(offsetof(__wasi_bus_event_data_t, cid) == 4, "witx calculated offset");
_Static_assert(offsetof(__wasi_bus_event_data_t, topic_len) == 8, "witx calculated offset");
_Static_assert(offsetof(__wasi_bus_event_data_t, buf_len) == 12, "witx calculated offset");

/**
 * Bus process reply event.
 */
typedef struct __wasi_bus_event_fault_t {
    /**
     * Handle of the call where this event occurs for
     */
    __wasi_cid_t cid;

    /**
     * Fault that was raised against this call
     */
    __wasi_bus_error_t fault;

} __wasi_bus_event_fault_t;

_Static_assert(sizeof(__wasi_bus_event_fault_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_bus_event_fault_t) == 4, "witx calculated align");
_Static_assert(offsetof(__wasi_bus_event_fault_t, cid) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_bus_event_fault_t, fault) == 4, "witx calculated offset");

/**
 * Type of a subscription to an event or its occurrence.
 */
typedef uint8_t __wasi_bus_event_type_t;

/**
 * The bus process has exited
 */
#define __WASI_BUS_EVENT_TYPE_EXIT (UINT8_C(0))

/**
 * The bus data recevied for a specific event
 */
#define __WASI_BUS_EVENT_TYPE_DATA (UINT8_C(1))

/**
 * Fault has occured on one of the calls
 */
#define __WASI_BUS_EVENT_TYPE_FAULT (UINT8_C(2))

_Static_assert(sizeof(__wasi_bus_event_type_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_bus_event_type_t) == 1, "witx calculated align");

/**
 * The contents of a `subscription`.
 */
typedef union __wasi_bus_event_u_t {
    __wasi_bus_event_exit_t exit;
    __wasi_bus_event_data_t data;
    __wasi_bus_event_fault_t fault;
} __wasi_bus_event_u_t;
typedef struct __wasi_bus_event_t {
    uint8_t tag;
    __wasi_bus_event_u_t u;
} __wasi_bus_event_t;

_Static_assert(sizeof(__wasi_bus_event_t) == 20, "witx calculated size");
_Static_assert(_Alignof(__wasi_bus_event_t) == 4, "witx calculated align");

/**
 * Signal condition.
 */
typedef uint8_t __wasi_signal_t;

/**
 * No signal. Note that POSIX has special semantics for `kill(pid, 0)`,
 * so this value is reserved.
 */
#define __WASI_SIGNAL_NONE (UINT8_C(0))

/**
 * Hangup.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_HUP (UINT8_C(1))

/**
 * Terminate interrupt signal.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_INT (UINT8_C(2))

/**
 * Terminal quit signal.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_QUIT (UINT8_C(3))

/**
 * Illegal instruction.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_ILL (UINT8_C(4))

/**
 * Trace/breakpoint trap.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_TRAP (UINT8_C(5))

/**
 * Process abort signal.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_ABRT (UINT8_C(6))

/**
 * Access to an undefined portion of a memory object.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_BUS (UINT8_C(7))

/**
 * Erroneous arithmetic operation.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_FPE (UINT8_C(8))

/**
 * Kill.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_KILL (UINT8_C(9))

/**
 * User-defined signal 1.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_USR1 (UINT8_C(10))

/**
 * Invalid memory reference.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_SEGV (UINT8_C(11))

/**
 * User-defined signal 2.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_USR2 (UINT8_C(12))

/**
 * Write on a pipe with no one to read it.
 * Action: Ignored.
 */
#define __WASI_SIGNAL_PIPE (UINT8_C(13))

/**
 * Alarm clock.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_ALRM (UINT8_C(14))

/**
 * Termination signal.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_TERM (UINT8_C(15))

/**
 * Child process terminated, stopped, or continued.
 * Action: Ignored.
 */
#define __WASI_SIGNAL_CHLD (UINT8_C(16))

/**
 * Continue executing, if stopped.
 * Action: Continues executing, if stopped.
 */
#define __WASI_SIGNAL_CONT (UINT8_C(17))

/**
 * Stop executing.
 * Action: Stops executing.
 */
#define __WASI_SIGNAL_STOP (UINT8_C(18))

/**
 * Terminal stop signal.
 * Action: Stops executing.
 */
#define __WASI_SIGNAL_TSTP (UINT8_C(19))

/**
 * Background process attempting read.
 * Action: Stops executing.
 */
#define __WASI_SIGNAL_TTIN (UINT8_C(20))

/**
 * Background process attempting write.
 * Action: Stops executing.
 */
#define __WASI_SIGNAL_TTOU (UINT8_C(21))

/**
 * High bandwidth data is available at a socket.
 * Action: Ignored.
 */
#define __WASI_SIGNAL_URG (UINT8_C(22))

/**
 * CPU time limit exceeded.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_XCPU (UINT8_C(23))

/**
 * File size limit exceeded.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_XFSZ (UINT8_C(24))

/**
 * Virtual timer expired.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_VTALRM (UINT8_C(25))

/**
 * Profiling timer expired.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_PROF (UINT8_C(26))

/**
 * Window changed.
 * Action: Ignored.
 */
#define __WASI_SIGNAL_WINCH (UINT8_C(27))

/**
 * I/O possible.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_POLL (UINT8_C(28))

/**
 * Power failure.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_PWR (UINT8_C(29))

/**
 * Bad system call.
 * Action: Terminates the process.
 */
#define __WASI_SIGNAL_SYS (UINT8_C(30))

_Static_assert(sizeof(__wasi_signal_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_signal_t) == 1, "witx calculated align");

/**
 * Flags provided to `sock_recv`.
 */
typedef uint16_t __wasi_riflags_t;

/**
 * Returns the message without removing it from the socket's receive queue.
 */
#define __WASI_RIFLAGS_RECV_PEEK ((__wasi_riflags_t)(1 << 0))

/**
 * On byte-stream sockets, block until the full amount of data can be returned.
 */
#define __WASI_RIFLAGS_RECV_WAITALL ((__wasi_riflags_t)(1 << 1))

/**
 * Indicates if the packet should be truncated to the buffer size
 */
#define __WASI_RIFLAGS_RECV_TRUNC ((__wasi_riflags_t)(1 << 2))

/**
 * Flags returned by `sock_recv`.
 */
typedef uint16_t __wasi_roflags_t;

/**
 * Returned by `sock_recv`: Message data has been truncated.
 */
#define __WASI_ROFLAGS_RECV_DATA_TRUNCATED ((__wasi_roflags_t)(1 << 0))

/**
 * Socket type
 */
typedef uint8_t __wasi_sock_type_t;

/**
 * The file descriptor or file refers to a datagram socket.
 */
#define __WASI_SOCK_TYPE_SOCKET_DGRAM (UINT8_C(0))

/**
 * The file descriptor or file refers to a byte-stream socket.
 */
#define __WASI_SOCK_TYPE_SOCKET_STREAM (UINT8_C(1))

/**
 * The file descriptor or file refers to a raw socket.
 */
#define __WASI_SOCK_TYPE_SOCKET_RAW (UINT8_C(2))

_Static_assert(sizeof(__wasi_sock_type_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_sock_type_t) == 1, "witx calculated align");

/**
 * IP protocol type
 */
typedef uint16_t __wasi_ip_proto_t;

#define __WASI_IP_PROTO_IPPROTO_IP (UINT16_C(0))

#define __WASI_IP_PROTO_IPPROTO_ICMP (UINT16_C(1))

#define __WASI_IP_PROTO_IPPROTO_IGMP (UINT16_C(2))

#define __WASI_IP_PROTO_IPPROTO_3 (UINT16_C(3))

#define __WASI_IP_PROTO_IPPROTO_IPIP (UINT16_C(4))

#define __WASI_IP_PROTO_IPPROTO_5 (UINT16_C(5))

#define __WASI_IP_PROTO_IPPROTO_TCP (UINT16_C(6))

#define __WASI_IP_PROTO_IPPROTO_7 (UINT16_C(7))

#define __WASI_IP_PROTO_IPPROTO_EGP (UINT16_C(8))

#define __WASI_IP_PROTO_IPPROTO_9 (UINT16_C(9))

#define __WASI_IP_PROTO_IPPROTO_10 (UINT16_C(10))

#define __WASI_IP_PROTO_IPPROTO_11 (UINT16_C(11))

#define __WASI_IP_PROTO_IPPROTO_PUP (UINT16_C(12))

#define __WASI_IP_PROTO_IPPROTO_13 (UINT16_C(13))

#define __WASI_IP_PROTO_IPPROTO_14 (UINT16_C(14))

#define __WASI_IP_PROTO_IPPROTO_15 (UINT16_C(15))

#define __WASI_IP_PROTO_IPPROTO_16 (UINT16_C(16))

#define __WASI_IP_PROTO_IPPROTO_UDP (UINT16_C(17))

#define __WASI_IP_PROTO_IPPROTO_18 (UINT16_C(18))

#define __WASI_IP_PROTO_IPPROTO_19 (UINT16_C(19))

#define __WASI_IP_PROTO_IPPROTO_20 (UINT16_C(20))

#define __WASI_IP_PROTO_IPPROTO_21 (UINT16_C(21))

#define __WASI_IP_PROTO_IPPROTO_IDP (UINT16_C(22))

#define __WASI_IP_PROTO_IPPROTO_23 (UINT16_C(23))

#define __WASI_IP_PROTO_IPPROTO_24 (UINT16_C(24))

#define __WASI_IP_PROTO_IPPROTO_25 (UINT16_C(25))

#define __WASI_IP_PROTO_IPPROTO_26 (UINT16_C(26))

#define __WASI_IP_PROTO_IPPROTO_27 (UINT16_C(27))

#define __WASI_IP_PROTO_IPPROTO_28 (UINT16_C(28))

#define __WASI_IP_PROTO_IPPROTO_TP (UINT16_C(29))

#define __WASI_IP_PROTO_IPPROTO_30 (UINT16_C(30))

#define __WASI_IP_PROTO_IPPROTO_31 (UINT16_C(31))

#define __WASI_IP_PROTO_IPPROTO_32 (UINT16_C(32))

#define __WASI_IP_PROTO_IPPROTO_DCCP (UINT16_C(33))

#define __WASI_IP_PROTO_IPPROTO_34 (UINT16_C(34))

#define __WASI_IP_PROTO_IPPROTO_35 (UINT16_C(35))

#define __WASI_IP_PROTO_IPPROTO_36 (UINT16_C(36))

#define __WASI_IP_PROTO_IPPROTO_37 (UINT16_C(37))

#define __WASI_IP_PROTO_IPPROTO_38 (UINT16_C(38))

#define __WASI_IP_PROTO_IPPROTO_39 (UINT16_C(39))

#define __WASI_IP_PROTO_IPPROTO_40 (UINT16_C(40))

#define __WASI_IP_PROTO_IPPROTO_IPV6 (UINT16_C(41))

#define __WASI_IP_PROTO_IPPROTO_42 (UINT16_C(42))

#define __WASI_IP_PROTO_IPPROTO_ROUTING (UINT16_C(43))

#define __WASI_IP_PROTO_IPPROTO_FRAGMENT (UINT16_C(44))

#define __WASI_IP_PROTO_IPPROTO_45 (UINT16_C(45))

#define __WASI_IP_PROTO_IPPROTO_RSVP (UINT16_C(46))

#define __WASI_IP_PROTO_IPPROTO_GRE (UINT16_C(47))

#define __WASI_IP_PROTO_IPPROTO_48 (UINT16_C(48))

#define __WASI_IP_PROTO_IPPROTO_49 (UINT16_C(49))

#define __WASI_IP_PROTO_IPPROTO_ESP (UINT16_C(50))

#define __WASI_IP_PROTO_IPPROTO_AH (UINT16_C(51))

#define __WASI_IP_PROTO_IPPROTO_52 (UINT16_C(52))

#define __WASI_IP_PROTO_IPPROTO_53 (UINT16_C(53))

#define __WASI_IP_PROTO_IPPROTO_54 (UINT16_C(54))

#define __WASI_IP_PROTO_IPPROTO_55 (UINT16_C(55))

#define __WASI_IP_PROTO_IPPROTO_56 (UINT16_C(56))

#define __WASI_IP_PROTO_IPPROTO_57 (UINT16_C(57))

#define __WASI_IP_PROTO_IPPROTO_ICMPV6 (UINT16_C(58))

#define __WASI_IP_PROTO_IPPROTO_NONE (UINT16_C(59))

#define __WASI_IP_PROTO_IPPROTO_DSTOPTS (UINT16_C(60))

#define __WASI_IP_PROTO_IPPROTO_61 (UINT16_C(61))

#define __WASI_IP_PROTO_IPPROTO_62 (UINT16_C(62))

#define __WASI_IP_PROTO_IPPROTO_63 (UINT16_C(63))

#define __WASI_IP_PROTO_IPPROTO_64 (UINT16_C(64))

#define __WASI_IP_PROTO_IPPROTO_65 (UINT16_C(65))

#define __WASI_IP_PROTO_IPPROTO_66 (UINT16_C(66))

#define __WASI_IP_PROTO_IPPROTO_67 (UINT16_C(67))

#define __WASI_IP_PROTO_IPPROTO_68 (UINT16_C(68))

#define __WASI_IP_PROTO_IPPROTO_69 (UINT16_C(69))

#define __WASI_IP_PROTO_IPPROTO_70 (UINT16_C(70))

#define __WASI_IP_PROTO_IPPROTO_71 (UINT16_C(71))

#define __WASI_IP_PROTO_IPPROTO_72 (UINT16_C(72))

#define __WASI_IP_PROTO_IPPROTO_73 (UINT16_C(73))

#define __WASI_IP_PROTO_IPPROTO_74 (UINT16_C(74))

#define __WASI_IP_PROTO_IPPROTO_75 (UINT16_C(75))

#define __WASI_IP_PROTO_IPPROTO_76 (UINT16_C(76))

#define __WASI_IP_PROTO_IPPROTO_77 (UINT16_C(77))

#define __WASI_IP_PROTO_IPPROTO_78 (UINT16_C(78))

#define __WASI_IP_PROTO_IPPROTO_79 (UINT16_C(79))

#define __WASI_IP_PROTO_IPPROTO_80 (UINT16_C(80))

#define __WASI_IP_PROTO_IPPROTO_81 (UINT16_C(81))

#define __WASI_IP_PROTO_IPPROTO_82 (UINT16_C(82))

#define __WASI_IP_PROTO_IPPROTO_83 (UINT16_C(83))

#define __WASI_IP_PROTO_IPPROTO_84 (UINT16_C(84))

#define __WASI_IP_PROTO_IPPROTO_85 (UINT16_C(85))

#define __WASI_IP_PROTO_IPPROTO_86 (UINT16_C(86))

#define __WASI_IP_PROTO_IPPROTO_87 (UINT16_C(87))

#define __WASI_IP_PROTO_IPPROTO_88 (UINT16_C(88))

#define __WASI_IP_PROTO_IPPROTO_89 (UINT16_C(89))

#define __WASI_IP_PROTO_IPPROTO_90 (UINT16_C(90))

#define __WASI_IP_PROTO_IPPROTO_91 (UINT16_C(91))

#define __WASI_IP_PROTO_IPPROTO_MTP (UINT16_C(92))

#define __WASI_IP_PROTO_IPPROTO_93 (UINT16_C(93))

#define __WASI_IP_PROTO_IPPROTO_BEETPH (UINT16_C(94))

#define __WASI_IP_PROTO_IPPROTO_95 (UINT16_C(95))

#define __WASI_IP_PROTO_IPPROTO_96 (UINT16_C(96))

#define __WASI_IP_PROTO_IPPROTO_97 (UINT16_C(97))

#define __WASI_IP_PROTO_IPPROTO_ENCAP (UINT16_C(98))

#define __WASI_IP_PROTO_IPPROTO_99 (UINT16_C(99))

#define __WASI_IP_PROTO_IPPROTO_100 (UINT16_C(100))

#define __WASI_IP_PROTO_IPPROTO_101 (UINT16_C(101))

#define __WASI_IP_PROTO_IPPROTO_102 (UINT16_C(102))

#define __WASI_IP_PROTO_IPPROTO_PIM (UINT16_C(103))

#define __WASI_IP_PROTO_IPPROTO_104 (UINT16_C(104))

#define __WASI_IP_PROTO_IPPROTO_105 (UINT16_C(105))

#define __WASI_IP_PROTO_IPPROTO_106 (UINT16_C(106))

#define __WASI_IP_PROTO_IPPROTO_107 (UINT16_C(107))

#define __WASI_IP_PROTO_IPPROTO_COMP (UINT16_C(108))

#define __WASI_IP_PROTO_IPPROTO_109 (UINT16_C(109))

#define __WASI_IP_PROTO_IPPROTO_110 (UINT16_C(110))

#define __WASI_IP_PROTO_IPPROTO_111 (UINT16_C(111))

#define __WASI_IP_PROTO_IPPROTO_112 (UINT16_C(112))

#define __WASI_IP_PROTO_IPPROTO_113 (UINT16_C(113))

#define __WASI_IP_PROTO_IPPROTO_114 (UINT16_C(114))

#define __WASI_IP_PROTO_IPPROTO_115 (UINT16_C(115))

#define __WASI_IP_PROTO_IPPROTO_116 (UINT16_C(116))

#define __WASI_IP_PROTO_IPPROTO_117 (UINT16_C(117))

#define __WASI_IP_PROTO_IPPROTO_118 (UINT16_C(118))

#define __WASI_IP_PROTO_IPPROTO_119 (UINT16_C(119))

#define __WASI_IP_PROTO_IPPROTO_120 (UINT16_C(120))

#define __WASI_IP_PROTO_IPPROTO_121 (UINT16_C(121))

#define __WASI_IP_PROTO_IPPROTO_122 (UINT16_C(122))

#define __WASI_IP_PROTO_IPPROTO_123 (UINT16_C(123))

#define __WASI_IP_PROTO_IPPROTO_124 (UINT16_C(124))

#define __WASI_IP_PROTO_IPPROTO_125 (UINT16_C(125))

#define __WASI_IP_PROTO_IPPROTO_126 (UINT16_C(126))

#define __WASI_IP_PROTO_IPPROTO_127 (UINT16_C(127))

#define __WASI_IP_PROTO_IPPROTO_128 (UINT16_C(128))

#define __WASI_IP_PROTO_IPPROTO_129 (UINT16_C(129))

#define __WASI_IP_PROTO_IPPROTO_130 (UINT16_C(130))

#define __WASI_IP_PROTO_IPPROTO_131 (UINT16_C(131))

#define __WASI_IP_PROTO_IPPROTO_SCTP (UINT16_C(132))

#define __WASI_IP_PROTO_IPPROTO_133 (UINT16_C(133))

#define __WASI_IP_PROTO_IPPROTO_134 (UINT16_C(134))

#define __WASI_IP_PROTO_IPPROTO_MH (UINT16_C(135))

#define __WASI_IP_PROTO_IPPROTO_UDPLITE (UINT16_C(136))

#define __WASI_IP_PROTO_IPPROTO_MPLS (UINT16_C(137))

#define __WASI_IP_PROTO_IPPROTO_138 (UINT16_C(138))

#define __WASI_IP_PROTO_IPPROTO_139 (UINT16_C(139))

#define __WASI_IP_PROTO_IPPROTO_140 (UINT16_C(140))

#define __WASI_IP_PROTO_IPPROTO_141 (UINT16_C(141))

#define __WASI_IP_PROTO_IPPROTO_142 (UINT16_C(142))

#define __WASI_IP_PROTO_IPPROTO_ETHERNET (UINT16_C(143))

#define __WASI_IP_PROTO_IPPROTO_144 (UINT16_C(144))

#define __WASI_IP_PROTO_IPPROTO_145 (UINT16_C(145))

#define __WASI_IP_PROTO_IPPROTO_146 (UINT16_C(146))

#define __WASI_IP_PROTO_IPPROTO_147 (UINT16_C(147))

#define __WASI_IP_PROTO_IPPROTO_148 (UINT16_C(148))

#define __WASI_IP_PROTO_IPPROTO_149 (UINT16_C(149))

#define __WASI_IP_PROTO_IPPROTO_150 (UINT16_C(150))

#define __WASI_IP_PROTO_IPPROTO_151 (UINT16_C(151))

#define __WASI_IP_PROTO_IPPROTO_152 (UINT16_C(152))

#define __WASI_IP_PROTO_IPPROTO_153 (UINT16_C(153))

#define __WASI_IP_PROTO_IPPROTO_154 (UINT16_C(154))

#define __WASI_IP_PROTO_IPPROTO_155 (UINT16_C(155))

#define __WASI_IP_PROTO_IPPROTO_156 (UINT16_C(156))

#define __WASI_IP_PROTO_IPPROTO_157 (UINT16_C(157))

#define __WASI_IP_PROTO_IPPROTO_158 (UINT16_C(158))

#define __WASI_IP_PROTO_IPPROTO_159 (UINT16_C(159))

#define __WASI_IP_PROTO_IPPROTO_160 (UINT16_C(160))

#define __WASI_IP_PROTO_IPPROTO_161 (UINT16_C(161))

#define __WASI_IP_PROTO_IPPROTO_162 (UINT16_C(162))

#define __WASI_IP_PROTO_IPPROTO_163 (UINT16_C(163))

#define __WASI_IP_PROTO_IPPROTO_164 (UINT16_C(164))

#define __WASI_IP_PROTO_IPPROTO_165 (UINT16_C(165))

#define __WASI_IP_PROTO_IPPROTO_166 (UINT16_C(166))

#define __WASI_IP_PROTO_IPPROTO_167 (UINT16_C(167))

#define __WASI_IP_PROTO_IPPROTO_168 (UINT16_C(168))

#define __WASI_IP_PROTO_IPPROTO_169 (UINT16_C(169))

#define __WASI_IP_PROTO_IPPROTO_170 (UINT16_C(170))

#define __WASI_IP_PROTO_IPPROTO_171 (UINT16_C(171))

#define __WASI_IP_PROTO_IPPROTO_172 (UINT16_C(172))

#define __WASI_IP_PROTO_IPPROTO_173 (UINT16_C(173))

#define __WASI_IP_PROTO_IPPROTO_174 (UINT16_C(174))

#define __WASI_IP_PROTO_IPPROTO_175 (UINT16_C(175))

#define __WASI_IP_PROTO_IPPROTO_176 (UINT16_C(176))

#define __WASI_IP_PROTO_IPPROTO_177 (UINT16_C(177))

#define __WASI_IP_PROTO_IPPROTO_178 (UINT16_C(178))

#define __WASI_IP_PROTO_IPPROTO_179 (UINT16_C(179))

#define __WASI_IP_PROTO_IPPROTO_180 (UINT16_C(180))

#define __WASI_IP_PROTO_IPPROTO_181 (UINT16_C(181))

#define __WASI_IP_PROTO_IPPROTO_182 (UINT16_C(182))

#define __WASI_IP_PROTO_IPPROTO_183 (UINT16_C(183))

#define __WASI_IP_PROTO_IPPROTO_184 (UINT16_C(184))

#define __WASI_IP_PROTO_IPPROTO_185 (UINT16_C(185))

#define __WASI_IP_PROTO_IPPROTO_186 (UINT16_C(186))

#define __WASI_IP_PROTO_IPPROTO_187 (UINT16_C(187))

#define __WASI_IP_PROTO_IPPROTO_188 (UINT16_C(188))

#define __WASI_IP_PROTO_IPPROTO_189 (UINT16_C(189))

#define __WASI_IP_PROTO_IPPROTO_190 (UINT16_C(190))

#define __WASI_IP_PROTO_IPPROTO_191 (UINT16_C(191))

#define __WASI_IP_PROTO_IPPROTO_192 (UINT16_C(192))

#define __WASI_IP_PROTO_IPPROTO_193 (UINT16_C(193))

#define __WASI_IP_PROTO_IPPROTO_194 (UINT16_C(194))

#define __WASI_IP_PROTO_IPPROTO_195 (UINT16_C(195))

#define __WASI_IP_PROTO_IPPROTO_196 (UINT16_C(196))

#define __WASI_IP_PROTO_IPPROTO_197 (UINT16_C(197))

#define __WASI_IP_PROTO_IPPROTO_198 (UINT16_C(198))

#define __WASI_IP_PROTO_IPPROTO_199 (UINT16_C(199))

#define __WASI_IP_PROTO_IPPROTO_200 (UINT16_C(200))

#define __WASI_IP_PROTO_IPPROTO_201 (UINT16_C(201))

#define __WASI_IP_PROTO_IPPROTO_202 (UINT16_C(202))

#define __WASI_IP_PROTO_IPPROTO_203 (UINT16_C(203))

#define __WASI_IP_PROTO_IPPROTO_204 (UINT16_C(204))

#define __WASI_IP_PROTO_IPPROTO_205 (UINT16_C(205))

#define __WASI_IP_PROTO_IPPROTO_206 (UINT16_C(206))

#define __WASI_IP_PROTO_IPPROTO_207 (UINT16_C(207))

#define __WASI_IP_PROTO_IPPROTO_208 (UINT16_C(208))

#define __WASI_IP_PROTO_IPPROTO_209 (UINT16_C(209))

#define __WASI_IP_PROTO_IPPROTO_210 (UINT16_C(210))

#define __WASI_IP_PROTO_IPPROTO_211 (UINT16_C(211))

#define __WASI_IP_PROTO_IPPROTO_212 (UINT16_C(212))

#define __WASI_IP_PROTO_IPPROTO_213 (UINT16_C(213))

#define __WASI_IP_PROTO_IPPROTO_214 (UINT16_C(214))

#define __WASI_IP_PROTO_IPPROTO_215 (UINT16_C(215))

#define __WASI_IP_PROTO_IPPROTO_216 (UINT16_C(216))

#define __WASI_IP_PROTO_IPPROTO_217 (UINT16_C(217))

#define __WASI_IP_PROTO_IPPROTO_218 (UINT16_C(218))

#define __WASI_IP_PROTO_IPPROTO_219 (UINT16_C(219))

#define __WASI_IP_PROTO_IPPROTO_220 (UINT16_C(220))

#define __WASI_IP_PROTO_IPPROTO_221 (UINT16_C(221))

#define __WASI_IP_PROTO_IPPROTO_222 (UINT16_C(222))

#define __WASI_IP_PROTO_IPPROTO_223 (UINT16_C(223))

#define __WASI_IP_PROTO_IPPROTO_224 (UINT16_C(224))

#define __WASI_IP_PROTO_IPPROTO_225 (UINT16_C(225))

#define __WASI_IP_PROTO_IPPROTO_226 (UINT16_C(226))

#define __WASI_IP_PROTO_IPPROTO_227 (UINT16_C(227))

#define __WASI_IP_PROTO_IPPROTO_228 (UINT16_C(228))

#define __WASI_IP_PROTO_IPPROTO_229 (UINT16_C(229))

#define __WASI_IP_PROTO_IPPROTO_230 (UINT16_C(230))

#define __WASI_IP_PROTO_IPPROTO_231 (UINT16_C(231))

#define __WASI_IP_PROTO_IPPROTO_232 (UINT16_C(232))

#define __WASI_IP_PROTO_IPPROTO_233 (UINT16_C(233))

#define __WASI_IP_PROTO_IPPROTO_234 (UINT16_C(234))

#define __WASI_IP_PROTO_IPPROTO_235 (UINT16_C(235))

#define __WASI_IP_PROTO_IPPROTO_236 (UINT16_C(236))

#define __WASI_IP_PROTO_IPPROTO_237 (UINT16_C(237))

#define __WASI_IP_PROTO_IPPROTO_238 (UINT16_C(238))

#define __WASI_IP_PROTO_IPPROTO_239 (UINT16_C(239))

#define __WASI_IP_PROTO_IPPROTO_240 (UINT16_C(240))

#define __WASI_IP_PROTO_IPPROTO_241 (UINT16_C(241))

#define __WASI_IP_PROTO_IPPROTO_242 (UINT16_C(242))

#define __WASI_IP_PROTO_IPPROTO_243 (UINT16_C(243))

#define __WASI_IP_PROTO_IPPROTO_244 (UINT16_C(244))

#define __WASI_IP_PROTO_IPPROTO_245 (UINT16_C(245))

#define __WASI_IP_PROTO_IPPROTO_246 (UINT16_C(246))

#define __WASI_IP_PROTO_IPPROTO_247 (UINT16_C(247))

#define __WASI_IP_PROTO_IPPROTO_248 (UINT16_C(248))

#define __WASI_IP_PROTO_IPPROTO_249 (UINT16_C(249))

#define __WASI_IP_PROTO_IPPROTO_250 (UINT16_C(250))

#define __WASI_IP_PROTO_IPPROTO_251 (UINT16_C(251))

#define __WASI_IP_PROTO_IPPROTO_252 (UINT16_C(252))

#define __WASI_IP_PROTO_IPPROTO_253 (UINT16_C(253))

#define __WASI_IP_PROTO_IPPROTO_254 (UINT16_C(254))

#define __WASI_IP_PROTO_IPPROTO_RAW (UINT16_C(255))

#define __WASI_IP_PROTO_IPPROTO_256 (UINT16_C(256))

#define __WASI_IP_PROTO_IPPROTO_257 (UINT16_C(257))

#define __WASI_IP_PROTO_IPPROTO_258 (UINT16_C(258))

#define __WASI_IP_PROTO_IPPROTO_259 (UINT16_C(259))

#define __WASI_IP_PROTO_IPPROTO_260 (UINT16_C(260))

#define __WASI_IP_PROTO_IPPROTO_261 (UINT16_C(261))

#define __WASI_IP_PROTO_IPPROTO_MPTCP (UINT16_C(262))

#define __WASI_IP_PROTO_IPPROTO_MAX (UINT16_C(263))

_Static_assert(sizeof(__wasi_ip_proto_t) == 2, "witx calculated size");
_Static_assert(_Alignof(__wasi_ip_proto_t) == 2, "witx calculated align");

/**
 * Socket status
 */
typedef uint8_t __wasi_sock_status_t;

/**
 * The socket is still opening
 */
#define __WASI_SOCK_STATUS_OPENING (UINT8_C(0))

/**
 * The socket has fully opened
 */
#define __WASI_SOCK_STATUS_OPENED (UINT8_C(1))

/**
 * The socket has closed
 */
#define __WASI_SOCK_STATUS_CLOSED (UINT8_C(2))

/**
 * The socket has failed
 */
#define __WASI_SOCK_STATUS_FAILED (UINT8_C(3))

_Static_assert(sizeof(__wasi_sock_status_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_sock_status_t) == 1, "witx calculated align");

/**
 * Socket option
 */
typedef uint8_t __wasi_sock_option_t;

/**
 * Reuse Port
 */
#define __WASI_SOCK_OPTION_REUSE_PORT (UINT8_C(0))

/**
 * Reuse Address
 */
#define __WASI_SOCK_OPTION_REUSE_ADDR (UINT8_C(1))

/**
 * No delay
 */
#define __WASI_SOCK_OPTION_NODELAY (UINT8_C(2))

/**
 * Only accept IPv6
 */
#define __WASI_SOCK_OPTION_ONLY_V6 (UINT8_C(3))

/**
 * Broadcast
 */
#define __WASI_SOCK_OPTION_BROADCAST (UINT8_C(4))

/**
 * Multicast Loop IPv4
 */
#define __WASI_SOCK_OPTION_MULTICAST_LOOP_V4 (UINT8_C(5))

/**
 * Multicast Loop IPv6
 */
#define __WASI_SOCK_OPTION_MULTICAST_LOOP_V6 (UINT8_C(6))

/**
 * Promiscuous
 */
#define __WASI_SOCK_OPTION_PROMISCUOUS (UINT8_C(7))

_Static_assert(sizeof(__wasi_sock_option_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_sock_option_t) == 1, "witx calculated align");

/**
 * Level of security to allow to the streaming connection
 */
typedef uint8_t __wasi_stream_security_t;

/**
 * Unencrypted
 */
#define __WASI_STREAM_SECURITY_UNENCRYPTED ((__wasi_stream_security_t)(1 << 0))

/**
 * Any encryption
 */
#define __WASI_STREAM_SECURITY_ANY_ENCRYPTION ((__wasi_stream_security_t)(1 << 1))

/**
 * Classic encryption
 */
#define __WASI_STREAM_SECURITY_CLASSIC_ENCRYPTION ((__wasi_stream_security_t)(1 << 2))

/**
 * Double encryption
 */
#define __WASI_STREAM_SECURITY_DOUBLE_ENCRYPTION ((__wasi_stream_security_t)(1 << 3))

/**
 * Hardware address (MAC)
 */
typedef struct __wasi_hardware_address_t {
    uint8_t n0;

    uint8_t n1;

    uint8_t n2;

    uint8_t h0;

    uint8_t h1;

    uint8_t h2;

} __wasi_hardware_address_t;

_Static_assert(sizeof(__wasi_hardware_address_t) == 6, "witx calculated size");
_Static_assert(_Alignof(__wasi_hardware_address_t) == 1, "witx calculated align");
_Static_assert(offsetof(__wasi_hardware_address_t, n0) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_hardware_address_t, n1) == 1, "witx calculated offset");
_Static_assert(offsetof(__wasi_hardware_address_t, n2) == 2, "witx calculated offset");
_Static_assert(offsetof(__wasi_hardware_address_t, h0) == 3, "witx calculated offset");
_Static_assert(offsetof(__wasi_hardware_address_t, h1) == 4, "witx calculated offset");
_Static_assert(offsetof(__wasi_hardware_address_t, h2) == 5, "witx calculated offset");

/**
 * IP port number
 */
typedef uint16_t __wasi_ip_port_t;

_Static_assert(sizeof(__wasi_ip_port_t) == 2, "witx calculated size");
_Static_assert(_Alignof(__wasi_ip_port_t) == 2, "witx calculated align");

/**
 * Address family
 */
typedef uint8_t __wasi_address_family_t;

/**
 * IP v4
 */
#define __WASI_ADDRESS_FAMILY_INET4 (UINT8_C(0))

/**
 * IP v6
 */
#define __WASI_ADDRESS_FAMILY_INET6 (UINT8_C(1))

_Static_assert(sizeof(__wasi_address_family_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_address_family_t) == 1, "witx calculated align");

/**
 * An IPv4 address is a 32-bit number that uniquely identifies a network interface on a machine.
 */
typedef struct __wasi_addr_ip4_t {
    uint8_t n0;

    uint8_t n1;

    uint8_t h0;

    uint8_t h1;

} __wasi_addr_ip4_t;

_Static_assert(sizeof(__wasi_addr_ip4_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_addr_ip4_t) == 1, "witx calculated align");
_Static_assert(offsetof(__wasi_addr_ip4_t, n0) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip4_t, n1) == 1, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip4_t, h0) == 2, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip4_t, h1) == 3, "witx calculated offset");

/**
 * An IPv4 address with a port number
 */
typedef struct __wasi_addr_ip4_port_t {
    __wasi_ip_port_t port;

    __wasi_addr_ip4_t addr;

} __wasi_addr_ip4_port_t;

_Static_assert(sizeof(__wasi_addr_ip4_port_t) == 6, "witx calculated size");
_Static_assert(_Alignof(__wasi_addr_ip4_port_t) == 2, "witx calculated align");
_Static_assert(offsetof(__wasi_addr_ip4_port_t, port) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip4_port_t, addr) == 2, "witx calculated offset");

/**
 * An IPv4 address CIDR
 */
typedef struct __wasi_addr_ip4_cidr_t {
    __wasi_addr_ip4_t addr;

    uint8_t prefix;

} __wasi_addr_ip4_cidr_t;

_Static_assert(sizeof(__wasi_addr_ip4_cidr_t) == 5, "witx calculated size");
_Static_assert(_Alignof(__wasi_addr_ip4_cidr_t) == 1, "witx calculated align");
_Static_assert(offsetof(__wasi_addr_ip4_cidr_t, addr) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip4_cidr_t, prefix) == 4, "witx calculated offset");

/**
 * An IPv6 address is a 128-bit number that uniquely identifies a network interface on a machine.
 */
typedef struct __wasi_addr_ip6_t {
    uint16_t n0;

    uint16_t n1;

    uint16_t n2;

    uint16_t n3;

    uint16_t h0;

    uint16_t h1;

    uint16_t h2;

    uint16_t h3;

} __wasi_addr_ip6_t;

_Static_assert(sizeof(__wasi_addr_ip6_t) == 16, "witx calculated size");
_Static_assert(_Alignof(__wasi_addr_ip6_t) == 2, "witx calculated align");
_Static_assert(offsetof(__wasi_addr_ip6_t, n0) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip6_t, n1) == 2, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip6_t, n2) == 4, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip6_t, n3) == 6, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip6_t, h0) == 8, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip6_t, h1) == 10, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip6_t, h2) == 12, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip6_t, h3) == 14, "witx calculated offset");

/**
 * An IPv6 address with a port number
 */
typedef struct __wasi_addr_ip6_port_t {
    __wasi_ip_port_t port;

    __wasi_addr_ip6_t addr;

} __wasi_addr_ip6_port_t;

_Static_assert(sizeof(__wasi_addr_ip6_port_t) == 18, "witx calculated size");
_Static_assert(_Alignof(__wasi_addr_ip6_port_t) == 2, "witx calculated align");
_Static_assert(offsetof(__wasi_addr_ip6_port_t, port) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip6_port_t, addr) == 2, "witx calculated offset");

/**
 * An IPv6 address CIDR
 */
typedef struct __wasi_addr_ip6_cidr_t {
    __wasi_addr_ip6_t addr;

    uint8_t prefix;

} __wasi_addr_ip6_cidr_t;

_Static_assert(sizeof(__wasi_addr_ip6_cidr_t) == 18, "witx calculated size");
_Static_assert(_Alignof(__wasi_addr_ip6_cidr_t) == 2, "witx calculated align");
_Static_assert(offsetof(__wasi_addr_ip6_cidr_t, addr) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_addr_ip6_cidr_t, prefix) == 16, "witx calculated offset");

/**
 * Union of all possible addresses type
 */
typedef union __wasi_addr_ip_u_t {
    __wasi_addr_ip4_t inet4;
    __wasi_addr_ip6_t inet6;
} __wasi_addr_ip_u_t;
typedef struct __wasi_addr_ip_t {
    uint8_t tag;
    __wasi_addr_ip_u_t u;
} __wasi_addr_ip_t;

_Static_assert(sizeof(__wasi_addr_ip_t) == 18, "witx calculated size");
_Static_assert(_Alignof(__wasi_addr_ip_t) == 2, "witx calculated align");

/**
 * Union that makes a generic IP address and port
 */
typedef union __wasi_addr_port_u_t {
    __wasi_addr_ip4_port_t inet4;
    __wasi_addr_ip6_port_t inet6;
} __wasi_addr_port_u_t;
typedef struct __wasi_addr_port_t {
    uint8_t tag;
    __wasi_addr_port_u_t u;
} __wasi_addr_port_t;

_Static_assert(sizeof(__wasi_addr_port_t) == 20, "witx calculated size");
_Static_assert(_Alignof(__wasi_addr_port_t) == 2, "witx calculated align");

/**
 * Union that makes a generic IP address and prefix. a.k.a. CIDR
 */
typedef union __wasi_addr_cidr_u_t {
    __wasi_addr_ip4_cidr_t inet4;
    __wasi_addr_ip6_cidr_t inet6;
} __wasi_addr_cidr_u_t;
typedef struct __wasi_addr_cidr_t {
    uint8_t tag;
    __wasi_addr_cidr_u_t u;
} __wasi_addr_cidr_t;

_Static_assert(sizeof(__wasi_addr_cidr_t) == 20, "witx calculated size");
_Static_assert(_Alignof(__wasi_addr_cidr_t) == 2, "witx calculated align");

typedef struct __wasi_route_t {
    __wasi_addr_cidr_t cidr;

    __wasi_addr_ip_t via_router;

    __wasi_option_timestamp_t preferred_until;

    __wasi_option_timestamp_t expires_at;

} __wasi_route_t;

_Static_assert(sizeof(__wasi_route_t) == 72, "witx calculated size");
_Static_assert(_Alignof(__wasi_route_t) == 8, "witx calculated align");
_Static_assert(offsetof(__wasi_route_t, cidr) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_route_t, via_router) == 20, "witx calculated offset");
_Static_assert(offsetof(__wasi_route_t, preferred_until) == 40, "witx calculated offset");
_Static_assert(offsetof(__wasi_route_t, expires_at) == 56, "witx calculated offset");

/**
 * HTTP request handles used to send and receive data to the server
 */
typedef struct __wasi_http_handles_t {
    /**
     * File handle used to write the request data
     */
    __wasi_fd_t request;

    /**
     * File handle used to receive the response data
     */
    __wasi_fd_t response;

    /**
     * File handle used to read the response headers
     * (entries are separated by line feeds)
     */
    __wasi_fd_t headers;

} __wasi_http_handles_t;

_Static_assert(sizeof(__wasi_http_handles_t) == 12, "witx calculated size");
_Static_assert(_Alignof(__wasi_http_handles_t) == 4, "witx calculated align");
_Static_assert(offsetof(__wasi_http_handles_t, request) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_http_handles_t, response) == 4, "witx calculated offset");
_Static_assert(offsetof(__wasi_http_handles_t, headers) == 8, "witx calculated offset");

/**
 * HTTP response status
 */
typedef struct __wasi_http_status_t {
    __wasi_bool_t ok;

    __wasi_bool_t redirected;

    /**
     * Size of the response
     */
    __wasi_filesize_t size;

    /**
     * HTTP status code for this response
     */
    uint16_t status;

} __wasi_http_status_t;

_Static_assert(sizeof(__wasi_http_status_t) == 24, "witx calculated size");
_Static_assert(_Alignof(__wasi_http_status_t) == 8, "witx calculated align");
_Static_assert(offsetof(__wasi_http_status_t, ok) == 0, "witx calculated offset");
_Static_assert(offsetof(__wasi_http_status_t, redirected) == 1, "witx calculated offset");
_Static_assert(offsetof(__wasi_http_status_t, size) == 8, "witx calculated offset");
_Static_assert(offsetof(__wasi_http_status_t, status) == 16, "witx calculated offset");

/**
 * Flags provided to `sock_send`. As there are currently no flags
 * defined, it must be set to zero.
 */
typedef uint16_t __wasi_siflags_t;

_Static_assert(sizeof(__wasi_siflags_t) == 2, "witx calculated size");
_Static_assert(_Alignof(__wasi_siflags_t) == 2, "witx calculated align");

/**
 * Which channels on a socket to shut down.
 */
typedef uint8_t __wasi_sdflags_t;

/**
 * Disables further receive operations.
 */
#define __WASI_SDFLAGS_RD ((__wasi_sdflags_t)(1 << 0))

/**
 * Disables further send operations.
 */
#define __WASI_SDFLAGS_WR ((__wasi_sdflags_t)(1 << 1))

/**
 * Describes the type of timeout what will be changed
 */
typedef uint8_t __wasi_timeout_type_t;

/**
 * Read operation timeout
 */
#define __WASI_TIMEOUT_TYPE_READ (UINT8_C(0))

/**
 * Write operation timeout
 */
#define __WASI_TIMEOUT_TYPE_WRITE (UINT8_C(1))

/**
 * Connections to other sockets
 */
#define __WASI_TIMEOUT_TYPE_CONNECT (UINT8_C(2))

/**
 * Accept connection timeout
 */
#define __WASI_TIMEOUT_TYPE_ACCEPT (UINT8_C(3))

_Static_assert(sizeof(__wasi_timeout_type_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_timeout_type_t) == 1, "witx calculated align");

/**
 * Identifiers for preopened capabilities.
 */
typedef uint8_t __wasi_preopentype_t;

/**
 * A pre-opened directory.
 */
#define __WASI_PREOPENTYPE_DIR (UINT8_C(0))

_Static_assert(sizeof(__wasi_preopentype_t) == 1, "witx calculated size");
_Static_assert(_Alignof(__wasi_preopentype_t) == 1, "witx calculated align");

/**
 * The contents of a $prestat when type is `preopentype::dir`.
 */
typedef struct __wasi_prestat_dir_t {
    /**
     * The length of the directory name for use with `fd_prestat_dir_name`.
     */
    uint32_t pr_name_len;

} __wasi_prestat_dir_t;

_Static_assert(sizeof(__wasi_prestat_dir_t) == 4, "witx calculated size");
_Static_assert(_Alignof(__wasi_prestat_dir_t) == 4, "witx calculated align");
_Static_assert(offsetof(__wasi_prestat_dir_t, pr_name_len) == 0, "witx calculated offset");

/**
 * Information about a pre-opened capability.
 */
typedef union __wasi_prestat_u_t {
    __wasi_prestat_dir_t dir;
} __wasi_prestat_u_t;
typedef struct __wasi_prestat_t {
    uint8_t tag;
    __wasi_prestat_u_t u;
} __wasi_prestat_t;

_Static_assert(sizeof(__wasi_prestat_t) == 8, "witx calculated size");
_Static_assert(_Alignof(__wasi_prestat_t) == 4, "witx calculated align");

/**
 * @defgroup wasix_snapshot_preview1
 * @{
 */

/**
 * Read command-line argument data.
 * The size of the array should match that returned by `args_sizes_get`.
 * Each argument is expected to be `\0` terminated.
 */
__wasi_errno_t __wasi_args_get(
    uint8_t * * argv,
    uint8_t * argv_buf
) __attribute__((__warn_unused_result__));
/**
 * Return command-line argument data sizes.
 * @return
 * Returns the number of arguments and the size of the argument string
 * data, or an error.
 */
__wasi_errno_t __wasi_args_sizes_get(
    __wasi_size_t *retptr0,
    __wasi_size_t *retptr1
) __attribute__((__warn_unused_result__));
/**
 * Read environment variable data.
 * The sizes of the buffers should match that returned by `environ_sizes_get`.
 * Key/value pairs are expected to be joined with `=`s, and terminated with `\0`s.
 */
__wasi_errno_t __wasi_environ_get(
    uint8_t * * environ,
    uint8_t * environ_buf
) __attribute__((__warn_unused_result__));
/**
 * Return environment variable data sizes.
 * @return
 * Returns the number of environment variable arguments and the size of the
 * environment variable data.
 */
__wasi_errno_t __wasi_environ_sizes_get(
    __wasi_size_t *retptr0,
    __wasi_size_t *retptr1
) __attribute__((__warn_unused_result__));
/**
 * Return the resolution of a clock.
 * Implementations are required to provide a non-zero value for supported clocks. For unsupported clocks,
 * return `errno::inval`.
 * Note: This is similar to `clock_getres` in POSIX.
 * @return
 * The resolution of the clock, or an error if one happened.
 */
__wasi_errno_t __wasi_clock_res_get(
    /**
     * The clock for which to return the resolution.
     */
    __wasi_clockid_t id,
    __wasi_timestamp_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Return the time value of a clock.
 * Note: This is similar to `clock_gettime` in POSIX.
 * @return
 * The time value of the clock.
 */
__wasi_errno_t __wasi_clock_time_get(
    /**
     * The clock for which to return the time.
     */
    __wasi_clockid_t id,
    /**
     * The maximum lag (exclusive) that the returned time value may have, compared to its actual value.
     */
    __wasi_timestamp_t precision,
    __wasi_timestamp_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Provide file advisory information on a file descriptor.
 * Note: This is similar to `posix_fadvise` in POSIX.
 */
__wasi_errno_t __wasi_fd_advise(
    __wasi_fd_t fd,
    /**
     * The offset within the file to which the advisory applies.
     */
    __wasi_filesize_t offset,
    /**
     * The length of the region to which the advisory applies.
     */
    __wasi_filesize_t len,
    /**
     * The advice.
     */
    __wasi_advice_t advice
) __attribute__((__warn_unused_result__));
/**
 * Force the allocation of space in a file.
 * Note: This is similar to `posix_fallocate` in POSIX.
 */
__wasi_errno_t __wasi_fd_allocate(
    __wasi_fd_t fd,
    /**
     * The offset at which to start the allocation.
     */
    __wasi_filesize_t offset,
    /**
     * The length of the area that is allocated.
     */
    __wasi_filesize_t len
) __attribute__((__warn_unused_result__));
/**
 * Close a file descriptor.
 * Note: This is similar to `close` in POSIX.
 */
__wasi_errno_t __wasi_fd_close(
    __wasi_fd_t fd
) __attribute__((__warn_unused_result__));
/**
 * Synchronize the data of a file to disk.
 * Note: This is similar to `fdatasync` in POSIX.
 */
__wasi_errno_t __wasi_fd_datasync(
    __wasi_fd_t fd
) __attribute__((__warn_unused_result__));
/**
 * Get the attributes of a file descriptor.
 * Note: This returns similar flags to `fsync(fd, F_GETFL)` in POSIX, as well as additional fields.
 * @return
 * The buffer where the file descriptor's attributes are stored.
 */
__wasi_errno_t __wasi_fd_fdstat_get(
    __wasi_fd_t fd,
    __wasi_fdstat_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Adjust the flags associated with a file descriptor.
 * Note: This is similar to `fcntl(fd, F_SETFL, flags)` in POSIX.
 */
__wasi_errno_t __wasi_fd_fdstat_set_flags(
    __wasi_fd_t fd,
    /**
     * The desired values of the file descriptor flags.
     */
    __wasi_fdflags_t flags
) __attribute__((__warn_unused_result__));
/**
 * Adjust the rights associated with a file descriptor.
 * This can only be used to remove rights, and returns `errno::notcapable` if called in a way that would attempt to add rights
 */
__wasi_errno_t __wasi_fd_fdstat_set_rights(
    __wasi_fd_t fd,
    /**
     * The desired rights of the file descriptor.
     */
    __wasi_rights_t fs_rights_base,
    __wasi_rights_t fs_rights_inheriting
) __attribute__((__warn_unused_result__));
/**
 * Return the attributes of an open file.
 * @return
 * The buffer where the file's attributes are stored.
 */
__wasi_errno_t __wasi_fd_filestat_get(
    __wasi_fd_t fd,
    __wasi_filestat_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Adjust the size of an open file. If this increases the file's size, the extra bytes are filled with zeros.
 * Note: This is similar to `ftruncate` in POSIX.
 */
__wasi_errno_t __wasi_fd_filestat_set_size(
    __wasi_fd_t fd,
    /**
     * The desired file size.
     */
    __wasi_filesize_t size
) __attribute__((__warn_unused_result__));
/**
 * Adjust the timestamps of an open file or directory.
 * Note: This is similar to `futimens` in POSIX.
 */
__wasi_errno_t __wasi_fd_filestat_set_times(
    __wasi_fd_t fd,
    /**
     * The desired values of the data access timestamp.
     */
    __wasi_timestamp_t atim,
    /**
     * The desired values of the data modification timestamp.
     */
    __wasi_timestamp_t mtim,
    /**
     * A bitmask indicating which timestamps to adjust.
     */
    __wasi_fstflags_t fst_flags
) __attribute__((__warn_unused_result__));
/**
 * Read from a file descriptor, without using and updating the file descriptor's offset.
 * Note: This is similar to `preadv` in POSIX.
 * @return
 * The number of bytes read.
 */
__wasi_errno_t __wasi_fd_pread(
    __wasi_fd_t fd,
    /**
     * List of scatter/gather vectors in which to store data.
     */
    const __wasi_iovec_t *iovs,
    /**
     * The length of the array pointed to by `iovs`.
     */
    size_t iovs_len,
    /**
     * The offset within the file at which to read.
     */
    __wasi_filesize_t offset,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Return a description of the given preopened file descriptor.
 * @return
 * The buffer where the description is stored.
 */
__wasi_errno_t __wasi_fd_prestat_get(
    __wasi_fd_t fd,
    __wasi_prestat_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Return a description of the given preopened file descriptor.
 */
__wasi_errno_t __wasi_fd_prestat_dir_name(
    __wasi_fd_t fd,
    /**
     * A buffer into which to write the preopened directory name.
     */
    uint8_t * path,
    __wasi_pointersize_t path_len
) __attribute__((__warn_unused_result__));
/**
 * Write to a file descriptor, without using and updating the file descriptor's offset.
 * Note: This is similar to `pwritev` in POSIX.
 * @return
 * The number of bytes written.
 */
__wasi_errno_t __wasi_fd_pwrite(
    __wasi_fd_t fd,
    /**
     * List of scatter/gather vectors from which to retrieve data.
     */
    const __wasi_ciovec_t *iovs,
    /**
     * The length of the array pointed to by `iovs`.
     */
    size_t iovs_len,
    /**
     * The offset within the file at which to write.
     */
    __wasi_filesize_t offset,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Read from a file descriptor.
 * Note: This is similar to `readv` in POSIX.
 * @return
 * The number of bytes read.
 */
__wasi_errno_t __wasi_fd_read(
    __wasi_fd_t fd,
    /**
     * List of scatter/gather vectors to which to store data.
     */
    const __wasi_iovec_t *iovs,
    /**
     * The length of the array pointed to by `iovs`.
     */
    size_t iovs_len,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Read directory entries from a directory.
 * When successful, the contents of the output buffer consist of a sequence of
 * directory entries. Each directory entry consists of a `dirent` object,
 * followed by `dirent::d_namlen` bytes holding the name of the directory
 * entry.
 * This function fills the output buffer as much as possible, potentially
 * truncating the last directory entry. This allows the caller to grow its
 * read buffer size in case it's too small to fit a single large directory
 * entry, or skip the oversized directory entry.
 * @return
 * The number of bytes stored in the read buffer. If less than the size of the read buffer, the end of the directory has been reached.
 */
__wasi_errno_t __wasi_fd_readdir(
    __wasi_fd_t fd,
    /**
     * The buffer where directory entries are stored
     */
    uint8_t * buf,
    __wasi_pointersize_t buf_len,
    /**
     * The location within the directory to start reading
     */
    __wasi_dircookie_t cookie,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Atomically replace a file descriptor by renumbering another file descriptor.
 * Due to the strong focus on thread safety, this environment does not provide
 * a mechanism to duplicate or renumber a file descriptor to an arbitrary
 * number, like `dup2()`. This would be prone to race conditions, as an actual
 * file descriptor with the same number could be allocated by a different
 * thread at the same time.
 * This function provides a way to atomically renumber file descriptors, which
 * would disappear if `dup2()` were to be removed entirely.
 */
__wasi_errno_t __wasi_fd_renumber(
    __wasi_fd_t fd,
    /**
     * The file descriptor to overwrite.
     */
    __wasi_fd_t to
) __attribute__((__warn_unused_result__));
/**
 * Atomically duplicate a file handle.
 */
__wasi_errno_t __wasi_fd_dup(
    __wasi_fd_t fd,
    __wasi_fd_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Move the offset of a file descriptor.
 * Note: This is similar to `lseek` in POSIX.
 * @return
 * The new offset of the file descriptor, relative to the start of the file.
 */
__wasi_errno_t __wasi_fd_seek(
    __wasi_fd_t fd,
    /**
     * The number of bytes to move.
     */
    __wasi_filedelta_t offset,
    /**
     * The base from which the offset is relative.
     */
    __wasi_whence_t whence,
    __wasi_filesize_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Synchronize the data and metadata of a file to disk.
 * Note: This is similar to `fsync` in POSIX.
 */
__wasi_errno_t __wasi_fd_sync(
    __wasi_fd_t fd
) __attribute__((__warn_unused_result__));
/**
 * Return the current offset of a file descriptor.
 * Note: This is similar to `lseek(fd, 0, SEEK_CUR)` in POSIX.
 * @return
 * The current offset of the file descriptor, relative to the start of the file.
 */
__wasi_errno_t __wasi_fd_tell(
    __wasi_fd_t fd,
    __wasi_filesize_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Write to a file descriptor.
 * Note: This is similar to `writev` in POSIX.
 */
__wasi_errno_t __wasi_fd_write(
    __wasi_fd_t fd,
    /**
     * List of scatter/gather vectors from which to retrieve data.
     */
    const __wasi_ciovec_t *iovs,
    /**
     * The length of the array pointed to by `iovs`.
     */
    size_t iovs_len,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Opens a pipe with two file handles
 * 
 * Pipes are bidirectional
 */
__wasi_errno_t __wasi_pipe(
    __wasi_fd_t *retptr0,
    __wasi_fd_t *retptr1
) __attribute__((__warn_unused_result__));
/**
 * Create a directory.
 * Note: This is similar to `mkdirat` in POSIX.
 */
__wasi_errno_t __wasi_path_create_directory(
    __wasi_fd_t fd,
    /**
     * The path at which to create the directory.
     */
    const char *path
) __attribute__((__warn_unused_result__));
/**
 * Return the attributes of a file or directory.
 * Note: This is similar to `stat` in POSIX.
 * @return
 * The buffer where the file's attributes are stored.
 */
__wasi_errno_t __wasi_path_filestat_get(
    __wasi_fd_t fd,
    /**
     * Flags determining the method of how the path is resolved.
     */
    __wasi_lookupflags_t flags,
    /**
     * The path of the file or directory to inspect.
     */
    const char *path,
    __wasi_filestat_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Adjust the timestamps of a file or directory.
 * Note: This is similar to `utimensat` in POSIX.
 */
__wasi_errno_t __wasi_path_filestat_set_times(
    __wasi_fd_t fd,
    /**
     * Flags determining the method of how the path is resolved.
     */
    __wasi_lookupflags_t flags,
    /**
     * The path of the file or directory to operate on.
     */
    const char *path,
    /**
     * The desired values of the data access timestamp.
     */
    __wasi_timestamp_t atim,
    /**
     * The desired values of the data modification timestamp.
     */
    __wasi_timestamp_t mtim,
    /**
     * A bitmask indicating which timestamps to adjust.
     */
    __wasi_fstflags_t fst_flags
) __attribute__((__warn_unused_result__));
/**
 * Create a hard link.
 * Note: This is similar to `linkat` in POSIX.
 */
__wasi_errno_t __wasi_path_link(
    __wasi_fd_t old_fd,
    /**
     * Flags determining the method of how the path is resolved.
     */
    __wasi_lookupflags_t old_flags,
    /**
     * The source path from which to link.
     */
    const char *old_path,
    /**
     * The working directory at which the resolution of the new path starts.
     */
    __wasi_fd_t new_fd,
    /**
     * The destination path at which to create the hard link.
     */
    const char *new_path
) __attribute__((__warn_unused_result__));
/**
 * Open a file or directory.
 * The returned file descriptor is not guaranteed to be the lowest-numbered
 * file descriptor not currently open; it is randomized to prevent
 * applications from depending on making assumptions about indexes, since this
 * is error-prone in multi-threaded contexts. The returned file descriptor is
 * guaranteed to be less than 2**31.
 * Note: This is similar to `openat` in POSIX.
 * @return
 * The file descriptor of the file that has been opened.
 */
__wasi_errno_t __wasi_path_open(
    __wasi_fd_t fd,
    /**
     * Flags determining the method of how the path is resolved.
     */
    __wasi_lookupflags_t dirflags,
    /**
     * The relative path of the file or directory to open, relative to the
     * `path_open::fd` directory.
     */
    const char *path,
    /**
     * The method by which to open the file.
     */
    __wasi_oflags_t oflags,
    /**
     * The initial rights of the newly created file descriptor. The
     * implementation is allowed to return a file descriptor with fewer rights
     * than specified, if and only if those rights do not apply to the type of
     * file being opened.
     * The *base* rights are rights that will apply to operations using the file
     * descriptor itself, while the *inheriting* rights are rights that apply to
     * file descriptors derived from it.
     */
    __wasi_rights_t fs_rights_base,
    __wasi_rights_t fs_rights_inheriting,
    __wasi_fdflags_t fdflags,
    __wasi_fd_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Read the contents of a symbolic link.
 * Note: This is similar to `readlinkat` in POSIX.
 * @return
 * The number of bytes placed in the buffer.
 */
__wasi_errno_t __wasi_path_readlink(
    __wasi_fd_t fd,
    /**
     * The path of the symbolic link from which to read.
     */
    const char *path,
    /**
     * The buffer to which to write the contents of the symbolic link.
     */
    uint8_t * buf,
    __wasi_pointersize_t buf_len,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Remove a directory.
 * Return `errno::notempty` if the directory is not empty.
 * Note: This is similar to `unlinkat(fd, path, AT_REMOVEDIR)` in POSIX.
 */
__wasi_errno_t __wasi_path_remove_directory(
    __wasi_fd_t fd,
    /**
     * The path to a directory to remove.
     */
    const char *path
) __attribute__((__warn_unused_result__));
/**
 * Rename a file or directory.
 * Note: This is similar to `renameat` in POSIX.
 */
__wasi_errno_t __wasi_path_rename(
    __wasi_fd_t fd,
    /**
     * The source path of the file or directory to rename.
     */
    const char *old_path,
    /**
     * The working directory at which the resolution of the new path starts.
     */
    __wasi_fd_t new_fd,
    /**
     * The destination path to which to rename the file or directory.
     */
    const char *new_path
) __attribute__((__warn_unused_result__));
/**
 * Create a symbolic link.
 * Note: This is similar to `symlinkat` in POSIX.
 */
__wasi_errno_t __wasi_path_symlink(
    /**
     * The contents of the symbolic link.
     */
    const char *old_path,
    __wasi_fd_t fd,
    /**
     * The destination path at which to create the symbolic link.
     */
    const char *new_path
) __attribute__((__warn_unused_result__));
/**
 * Unlink a file.
 * Return `errno::isdir` if the path refers to a directory.
 * Note: This is similar to `unlinkat(fd, path, 0)` in POSIX.
 */
__wasi_errno_t __wasi_path_unlink_file(
    __wasi_fd_t fd,
    /**
     * The path to a file to unlink.
     */
    const char *path
) __attribute__((__warn_unused_result__));
/**
 * Concurrently poll for the occurrence of a set of events.
 * @return
 * The number of events stored.
 */
__wasi_errno_t __wasi_poll_oneoff(
    /**
     * The events to which to subscribe.
     */
    const __wasi_subscription_t * in,
    /**
     * The events that have occurred.
     */
    __wasi_event_t * out,
    /**
     * Both the number of subscriptions and events.
     */
    __wasi_size_t nsubscriptions,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Terminate the process normally. An exit code of 0 indicates successful
 * termination of the program. The meanings of other values is dependent on
 * the environment.
 */
_Noreturn void __wasi_proc_exit(
    /**
     * The exit code returned by the process.
     */
    __wasi_exitcode_t rval
);
/**
 * Send a signal to the process of the calling thread.
 * Note: This is similar to `raise` in POSIX.
 */
__wasi_errno_t __wasi_proc_raise(
    /**
     * The signal condition to trigger.
     */
    __wasi_signal_t sig
) __attribute__((__warn_unused_result__));
/**
 * Temporarily yield execution of the calling thread.
 * Note: This is similar to `sched_yield` in POSIX.
 */
__wasi_errno_t __wasi_sched_yield(
    void
) __attribute__((__warn_unused_result__));
/**
 * Write high-quality random data into a buffer.
 * This function blocks when the implementation is unable to immediately
 * provide sufficient high-quality random data.
 * This function may execute slowly, so when large mounts of random data are
 * required, it's advisable to use this function to seed a pseudo-random
 * number generator, rather than to provide the random data directly.
 */
__wasi_errno_t __wasi_random_get(
    /**
     * The buffer to fill with random data.
     */
    uint8_t * buf,
    __wasi_pointersize_t buf_len
) __attribute__((__warn_unused_result__));
/**
 * Retrieves the current state of the TTY
 */
__wasi_errno_t __wasi_tty_get(
    __wasi_tty_t * state
) __attribute__((__warn_unused_result__));
/**
 * Updates the properties of the rect
 */
__wasi_errno_t __wasi_tty_set(
    __wasi_tty_t * state
) __attribute__((__warn_unused_result__));
/**
 * Returns the current working directory
 * If the path exceeds the size of the buffer then this function
 * will fill the path_len with the needed size and return EOVERFLOW
 */
__wasi_errno_t __wasi_getcwd(
    /**
     * The buffer where current directory is stored
     */
    uint8_t * path,
    __wasi_pointersize_t * path_len
) __attribute__((__warn_unused_result__));
/**
 * Sets the current working directory
 */
__wasi_errno_t __wasi_chdir(
    /**
     * Path to change the current working directory to
     */
    const char *path
) __attribute__((__warn_unused_result__));
/**
 * Creates a new thread by spawning that shares the same
 * memory address space, file handles and main event loops.
 * The function referenced by the fork call must be
 * exported by the web assembly process.
 * @return
 * Returns the thread index of the newly created thread
 * (indices always start from zero)
 */
__wasi_errno_t __wasi_thread_spawn(
    /**
     * Name of the function that will be invoked as a new thread
     */
    const char *name,
    /**
     * User data that will be supplied to the function when its called
     */
    uint64_t user_data,
    /**
     * Indicates if the function will operate as a reactor or
     * as a normal thread. Reactors will be repeatable called
     * whenever IO work is available to be processed.
     */
    __wasi_bool_t reactor,
    __wasi_tid_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Sends the current thread to sleep for a period of time
 */
__wasi_errno_t __wasi_thread_sleep(
    /**
     * Amount of time that the thread should sleep
     */
    __wasi_timestamp_t duration
) __attribute__((__warn_unused_result__));
/**
 * Returns the index of the current thread
 * (threads indices are sequencial from zero)
 */
__wasi_errno_t __wasi_thread_id(
    __wasi_tid_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Joins this thread with another thread, blocking this
 * one until the other finishes
 */
__wasi_errno_t __wasi_thread_join(
    /**
     * Handle of the thread to wait on
     */
    __wasi_tid_t tid
) __attribute__((__warn_unused_result__));
/**
 * Returns the available parallelism which is normally the
 * number of available cores that can run concurrently
 */
__wasi_errno_t __wasi_thread_parallelism(
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Returns the handle of the current process
 */
__wasi_errno_t __wasi_getpid(
    __wasi_pid_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Terminates the current running thread, if this is the last thread then
 * the process will also exit with the specified exit code. An exit code
 * of 0 indicates successful termination of the thread. The meanings of
 * other values is dependent on the environment.
 */
_Noreturn void __wasi_thread_exit(
    /**
     * The exit code returned by the process.
     */
    __wasi_exitcode_t rval
);
/**
 * Spawns a new bus process for a particular web WebAssembly
 * binary that is referenced by its process name.
 * @return
 * Returns a bus process id that can be used to invoke calls
 */
__wasi_bus_error_t __wasi_bus_spawn_local(
    /**
     * Name of the process to be spawned
     */
    const char *name,
    /**
     * Indicates if the process will chroot or not
     */
    __wasi_bool_t chroot,
    /**
     * List of the arguments to pass the process
     * (entries are separated by line feeds)
     */
    const char *args,
    /**
     * List of the preopens for this process
     * (entries are separated by line feeds)
     */
    const char *preopen,
    /**
     * How will stdin be handled
     */
    __wasi_stdio_mode_t stdin,
    /**
     * How will stdout be handled
     */
    __wasi_stdio_mode_t stdout,
    /**
     * How will stderr be handled
     */
    __wasi_stdio_mode_t stderr,
    /**
     * Working directory where this process should run
     * (passing '.' will use the current directory)
     */
    const char *working_dir,
    __wasi_bus_handles_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Spawns a new bus process for a particular web WebAssembly
 * binary that is referenced by its process name on a remote instance
 * @return
 * Returns a bus process id that can be used to invoke calls
 */
__wasi_bus_error_t __wasi_bus_spawn_remote(
    /**
     * Name of the process to be spawned
     */
    const char *name,
    /**
     * Indicates if the process will chroot or not
     */
    __wasi_bool_t chroot,
    /**
     * List of the arguments to pass the process
     * (entries are separated by line feeds)
     */
    const char *args,
    /**
     * List of the preopens for this process
     * (entries are separated by line feeds)
     */
    const char *preopen,
    /**
     * Working directory where this process should run
     * (passing '.' will use the current directory)
     */
    const char *working_dir,
    /**
     * How will stdin be handled
     */
    __wasi_stdio_mode_t stdin,
    /**
     * How will stdout be handled
     */
    __wasi_stdio_mode_t stdout,
    /**
     * How will stderr be handled
     */
    __wasi_stdio_mode_t stderr,
    /**
     * Instance identifier where this process will be spawned
     */
    const char *instance,
    /**
     * Acceess token used to authenticate with the instance
     */
    const char *token,
    __wasi_bus_handles_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Closes a bus process and releases all associated resources
 */
__wasi_bus_error_t __wasi_bus_close(
    /**
     * Handle of the bus process handle to be closed
     */
    __wasi_bid_t bid
) __attribute__((__warn_unused_result__));
/**
 * Invokes a call within a running bus process.
 */
__wasi_bus_error_t __wasi_bus_invoke(
    /**
     * Handle of the bus process to invoke the call within
     */
    __wasi_bid_t bid,
    /**
     * Optional parent bus call that this is related to
     */
    const __wasi_option_cid_t * parent,
    /**
     * Causes the call handle to remain open even when A
     * reply is received. It is then the  callers responsibility
     * to invoke 'bus_drop' when they are finished with the call
     */
    __wasi_bool_t keep_alive,
    /**
     * Topic that describes the type of call to made
     */
    const char *topic,
    /**
     * Format of the data pushed onto the bus
     */
    __wasi_bus_data_format_t format,
    /**
     * The buffer where data to be transmitted is stored
     */
    const uint8_t *buf,
    /**
     * The length of the array pointed to by `buf`.
     */
    size_t buf_len,
    __wasi_cid_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Causes a fault on a particular call that was made
 * to this process from another process; where 'bid'
 * is the callering process context.
 */
__wasi_bus_error_t __wasi_bus_fault(
    /**
     * Handle of the call to raise a fault on
     */
    __wasi_cid_t cid,
    /**
     * Fault to be raised on the bus
     */
    __wasi_bus_error_t fault
) __attribute__((__warn_unused_result__));
/**
 * Closes a bus call based on its bus call handle
 */
__wasi_bus_error_t __wasi_bus_drop(
    /**
     * Handle of the bus call handle to be dropped
     */
    __wasi_cid_t cid
) __attribute__((__warn_unused_result__));
/**
 * Replies to a call that was made to this process
 * from another process; where 'cid' is the call context.
 * This will may also drop the handle and release any
 * associated resources (if keepalive is not set)
 */
__wasi_bus_error_t __wasi_bus_reply(
    /**
     * Handle of the call to send a reply on
     */
    __wasi_cid_t cid,
    /**
     * Format of the data pushed onto the bus
     */
    __wasi_bus_data_format_t format,
    /**
     * The buffer where data to be transmitted is stored
     */
    const uint8_t *buf,
    /**
     * The length of the array pointed to by `buf`.
     */
    size_t buf_len
) __attribute__((__warn_unused_result__));
/**
 * Invokes a callback within the calling process against
 * a particular bus call represented by 'cid'.
 */
__wasi_bus_error_t __wasi_bus_callback(
    /**
     * Handle of the call where a callback will be send
     */
    __wasi_cid_t cid,
    /**
     * Topic that describes the type of callback
     */
    const char *topic,
    /**
     * Format of the data pushed onto the bus
     */
    __wasi_bus_data_format_t format,
    /**
     * The buffer where data to be transmitted is stored
     */
    const uint8_t *buf,
    /**
     * The length of the array pointed to by `buf`.
     */
    size_t buf_len
) __attribute__((__warn_unused_result__));
/**
 * Tells the operating system that this process is
 * now listening for bus calls on a particular topic
 */
__wasi_bus_error_t __wasi_bus_listen(
    /**
     * Optional parent bus call that this is related to
     */
    const __wasi_option_cid_t * parent,
    /**
     * Topic that describes the process will listen forcalls on
     */
    const char *topic
) __attribute__((__warn_unused_result__));
/**
 * Polls for any outstanding events from a particular
 * bus process by its handle
 * @return
 * Returns the number of events that have occured
 */
__wasi_bus_error_t __wasi_bus_poll(
    /**
     * Handle of the bus process to poll for new events
     * (if no process is supplied then it polls for the current process)
     */
    const __wasi_option_bid_t * bid,
    /**
     * Timeout before the poll returns, if one passed 0
     * as the timeout then this call is non blocking.
     */
    __wasi_timestamp_t timeout,
    /**
     * An events buffer that will hold any received bus events
     */
    __wasi_bus_event_t * events,
    __wasi_size_t nevents,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Receives the next event data from the bus
 * @return
 * Returns the number of events that have occured
 */
__wasi_bus_error_t __wasi_bus_poll_data(
    /**
     * Handle of the bus process to poll for new events
     * (if no process is supplied then it polls for the current process)
     */
    const __wasi_option_bid_t * bid,
    /**
     * Timeout before the poll returns, if one passed 0
     * as the timeout then this call is non blocking.
     */
    __wasi_timestamp_t timeout,
    /**
     * The topic that describes the event that happened
     */
    uint8_t * topic,
    __wasi_pointersize_t topic_len,
    /**
     * The buffer where event data is stored
     */
    uint8_t * buf,
    __wasi_pointersize_t buf_len,
    __wasi_bus_event_data_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Connects to a websocket at a particular network URL
 * @return
 * Returns a socket handle which is used to send and receive data
 */
__wasi_errno_t __wasi_ws_connect(
    /**
     * URL of the web socket destination to connect to
     */
    const char *url,
    __wasi_fd_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Makes a HTTP request to a remote web resource and
 * returns a socket handles that are used to send and receive data
 * @return
 * The body of the response can be streamed from the returned
 * file handle
 */
__wasi_errno_t __wasi_http_request(
    /**
     * URL of the HTTP resource to connect to
     */
    const char *url,
    /**
     * HTTP method to be invoked
     */
    const char *method,
    /**
     * HTTP headers to attach to the request
     * (headers seperated by lines)
     */
    const char *headers,
    /**
     * Should the request body be compressed
     */
    __wasi_bool_t gzip,
    __wasi_http_handles_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Retrieves the status of a HTTP request
 */
__wasi_errno_t __wasi_http_status(
    /**
     * Handle of the HTTP request
     */
    __wasi_fd_t fd,
    /**
     * Pointer to a buffer that will be filled with the current
     * status of this HTTP request
     */
    __wasi_http_status_t * status,
    /**
     * Buffer that will hold the status text
     */
    uint8_t * status_text,
    /**
     * This field will also be filled with the number of bytes returned in the status text
     */
    __wasi_pointersize_t * status_text_len,
    /**
     * Buffer that will hold the response headers
     */
    uint8_t * headers,
    /**
     * This field will also be filled with the number of bytes returned in the response headers
     */
    __wasi_pointersize_t * headers_len
) __attribute__((__warn_unused_result__));
/**
 * Securely connects to a particular remote network
 */
__wasi_errno_t __wasi_port_bridge(
    /**
     * Fully qualified identifier for the network
     */
    const char *network,
    /**
     * Access token used to authenticate with the network
     */
    const char *token,
    /**
     * Level of encryption to encapsulate the network connection with
     */
    __wasi_stream_security_t security
) __attribute__((__warn_unused_result__));
/**
 * Disconnects from a remote network
 */
__wasi_errno_t __wasi_port_unbridge(
    void
) __attribute__((__warn_unused_result__));
/**
 * Acquires a set of IP addresses using DHCP
 */
__wasi_errno_t __wasi_port_dhcp_acquire(
    void
) __attribute__((__warn_unused_result__));
/**
 * Adds another static IP address to the local port
 */
__wasi_errno_t __wasi_port_ip_add(
    /**
     * IP address to be added
     */
    const __wasi_addr_cidr_t * ip
) __attribute__((__warn_unused_result__));
/**
 * Removes an IP address from the local port
 */
__wasi_errno_t __wasi_port_ip_remove(
    /**
     * IP address to be removed
     */
    const __wasi_addr_ip_t * ip
) __attribute__((__warn_unused_result__));
/**
 * Clears all the IP addresses on the local port
 */
__wasi_errno_t __wasi_port_ip_clear(
    void
) __attribute__((__warn_unused_result__));
/**
 * Returns the MAC address of the local port
 */
__wasi_errno_t __wasi_port_mac(
    __wasi_hardware_address_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Returns a list of all the IP addresses owned by the local port
 * This function fills the output buffer as much as possible.
 * If the buffer is not big enough then the nips address will be
 * filled with the buffer size needed and the EOVERFLOW will be returned
 * @return
 * The number of IP addresses returned.
 */
__wasi_errno_t __wasi_port_ip_list(
    /**
     * The buffer where IP addresses will be stored
     */
    __wasi_addr_cidr_t * ips,
    __wasi_size_t * nips
) __attribute__((__warn_unused_result__));
/**
 * Adds a default gateway to the port
 */
__wasi_errno_t __wasi_port_gateway_set(
    /**
     * IP address of the default gateway
     */
    const __wasi_addr_ip_t * ip
) __attribute__((__warn_unused_result__));
/**
 * Adds a new route to the local port
 */
__wasi_errno_t __wasi_port_route_add(
    const __wasi_addr_cidr_t * cidr,
    const __wasi_addr_ip_t * via_router,
    const __wasi_option_timestamp_t * preferred_until,
    const __wasi_option_timestamp_t * expires_at
) __attribute__((__warn_unused_result__));
/**
 * Removes an existing route from the local port
 */
__wasi_errno_t __wasi_port_route_remove(
    const __wasi_addr_ip_t * cidr
) __attribute__((__warn_unused_result__));
/**
 * Clears all the routes in the local port
 */
__wasi_errno_t __wasi_port_route_clear(
    void
) __attribute__((__warn_unused_result__));
/**
 * Returns a list of all the routes owned by the local port
 * This function fills the output buffer as much as possible.
 * If the buffer is too small this will return EOVERFLOW and
 * fill nroutes with the size of the buffer needed.
 */
__wasi_errno_t __wasi_port_route_list(
    /**
     * The buffer where routes will be stored
     */
    __wasi_route_t * routes,
    __wasi_size_t * nroutes
) __attribute__((__warn_unused_result__));
/**
 * Shut down socket send and receive channels.
 * Note: This is similar to `shutdown` in POSIX.
 */
__wasi_errno_t __wasi_sock_shutdown(
    __wasi_fd_t fd,
    /**
     * Which channels on the socket to shut down.
     */
    __wasi_sdflags_t how
) __attribute__((__warn_unused_result__));
/**
 * Returns the current status of a socket
 */
__wasi_errno_t __wasi_sock_status(
    __wasi_fd_t fd,
    __wasi_sock_status_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Returns the local address to which the socket is bound.
 * 
 * Note: This is similar to `getsockname` in POSIX
 * 
 * When successful, the contents of the output buffer consist of an IP address,
 * either IP4 or IP6.
 */
__wasi_errno_t __wasi_sock_addr_local(
    /**
     * Socket that the address is bound to
     */
    __wasi_fd_t fd,
    __wasi_addr_port_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Returns the remote address to which the socket is connected to.
 * 
 * Note: This is similar to `getpeername` in POSIX
 * 
 * When successful, the contents of the output buffer consist of an IP address,
 * either IP4 or IP6.
 */
__wasi_errno_t __wasi_sock_addr_peer(
    /**
     * Socket that the address is bound to
     */
    __wasi_fd_t fd,
    __wasi_addr_port_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Create an endpoint for communication.
 * 
 * creates an endpoint for communication and returns a file descriptor
 * tor that refers to that endpoint. The file descriptor returned by a successful
 * call will be the lowest-numbered file descriptor not currently open
 * for the process.
 * 
 * Note: This is similar to `socket` in POSIX using PF_INET
 * @return
 * The file descriptor of the socket that has been opened.
 */
__wasi_errno_t __wasi_sock_open(
    /**
     * Address family
     */
    __wasi_address_family_t af,
    /**
     * Socket type, either datagram or stream
     */
    __wasi_sock_type_t socktype,
    __wasi_fd_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Sets a particular socket setting
 * Note: This is similar to `setsockopt` in POSIX for SO_REUSEADDR
 */
__wasi_errno_t __wasi_sock_set_opt(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Socket option to be set
     */
    __wasi_sock_option_t sockopt,
    /**
     * Value to set the option to
     */
    __wasi_bool_t flag
) __attribute__((__warn_unused_result__));
/**
 * Retrieve status of particular socket seting
 * Note: This is similar to `getsockopt` in POSIX for SO_REUSEADDR
 */
__wasi_errno_t __wasi_sock_get_opt(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Socket option to be retrieved
     */
    __wasi_sock_option_t sockopt,
    __wasi_bool_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Sets how long the socket will linger
 */
__wasi_errno_t __wasi_sock_set_linger(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Value to set the linger to
     */
    const __wasi_option_timestamp_t * linger
) __attribute__((__warn_unused_result__));
/**
 * Retrieve how long the socket will linger for
 */
__wasi_errno_t __wasi_sock_get_linger(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    __wasi_option_timestamp_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Sets one of the timeouts on the socket
 */
__wasi_errno_t __wasi_sock_set_timeout(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Type of timeout to be changed
     */
    __wasi_timeout_type_t ty,
    /**
     * Value to set the timeout to
     */
    const __wasi_option_timestamp_t * timeout
) __attribute__((__warn_unused_result__));
/**
 * Retrieve one of the timeouts on the socket
 */
__wasi_errno_t __wasi_sock_get_timeout(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Type of timeout to be retrieved
     */
    __wasi_timeout_type_t ty,
    __wasi_option_timestamp_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Set TTL for this socket
 */
__wasi_errno_t __wasi_sock_set_ttl(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Time to live
     */
    __wasi_size_t ttl
) __attribute__((__warn_unused_result__));
/**
 * Retrieve the TTL for this socket
 */
__wasi_errno_t __wasi_sock_get_ttl(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Set TTL for IPv4 multicast for this socket
 */
__wasi_errno_t __wasi_sock_set_multicast_ttl_v4(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Time to live
     */
    __wasi_size_t ttl
) __attribute__((__warn_unused_result__));
/**
 * Retrieve the TTL for IPv4 multicast for this socket
 */
__wasi_errno_t __wasi_sock_get_multicast_ttl_v4(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Joins a particular multicast IPv4 group
 */
__wasi_errno_t __wasi_sock_join_multicast_v4(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Multicast group to joined
     */
    const __wasi_addr_ip4_t * multiaddr,
    /**
     * Interface that will join
     */
    const __wasi_addr_ip4_t * interface
) __attribute__((__warn_unused_result__));
/**
 * Leaves a particular multicast IPv4 group
 */
__wasi_errno_t __wasi_sock_leave_multicast_v4(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Multicast group to leave
     */
    const __wasi_addr_ip4_t * multiaddr,
    /**
     * Interface that will left
     */
    const __wasi_addr_ip4_t * interface
) __attribute__((__warn_unused_result__));
/**
 * Joins a particular multicast IPv6 group
 */
__wasi_errno_t __wasi_sock_join_multicast_v6(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Multicast group to joined
     */
    const __wasi_addr_ip6_t * multiaddr,
    /**
     * Interface that will join
     */
    uint32_t interface
) __attribute__((__warn_unused_result__));
/**
 * Leaves a particular multicast IPv6 group
 */
__wasi_errno_t __wasi_sock_leave_multicast_v6(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Multicast group to leave
     */
    const __wasi_addr_ip6_t * multiaddr,
    /**
     * Interface that will left
     */
    uint32_t interface
) __attribute__((__warn_unused_result__));
/**
 * Set size of receive buffer
 * Note: This is similar to `setsockopt` in POSIX for SO_RCVBUF
 */
__wasi_errno_t __wasi_sock_set_recv_buf_size(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Buffer size
     */
    __wasi_filesize_t size
) __attribute__((__warn_unused_result__));
/**
 * Retrieve the size of the receive buffer
 * Note: This is similar to `getsockopt` in POSIX for SO_RCVBUF
 */
__wasi_errno_t __wasi_sock_get_recv_buf_size(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    __wasi_filesize_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Set size of send buffer
 * Note: This is similar to `setsockopt` in POSIX for SO_SNDBUF
 */
__wasi_errno_t __wasi_sock_set_send_buf_size(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Buffer size
     */
    __wasi_filesize_t size
) __attribute__((__warn_unused_result__));
/**
 * Retrieve the size of the send buffer
 * Note: This is similar to `getsockopt` in POSIX for SO_SNDBUF
 */
__wasi_errno_t __wasi_sock_get_send_buf_size(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    __wasi_filesize_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Bind a socket
 * Note: This is similar to `bind` in POSIX using PF_INET
 */
__wasi_errno_t __wasi_sock_bind(
    /**
     * File descriptor of the socket to be bind
     */
    __wasi_fd_t fd,
    /**
     * Address to bind the socket to
     */
    const __wasi_addr_port_t * addr
) __attribute__((__warn_unused_result__));
/**
 * Listen for connections on a socket
 * 
 * Polling the socket handle will wait until a connection
 * attempt is made
 * 
 * Note: This is similar to `listen`
 */
__wasi_errno_t __wasi_sock_listen(
    /**
     * File descriptor of the socket to be bind
     */
    __wasi_fd_t fd,
    /**
     * Maximum size of the queue for pending connections
     */
    __wasi_size_t backlog
) __attribute__((__warn_unused_result__));
/**
 * Accept a new incoming connection.
 * Note: This is similar to `accept` in POSIX.
 * @return
 * New socket connection
 */
__wasi_errno_t __wasi_sock_accept(
    /**
     * The listening socket.
     */
    __wasi_fd_t fd,
    /**
     * The desired values of the file descriptor flags.
     */
    __wasi_fdflags_t flags,
    __wasi_fd_t *retptr0,
    __wasi_addr_port_t *retptr1
) __attribute__((__warn_unused_result__));
/**
 * Initiate a connection on a socket to the specified address
 * 
 * Polling the socket handle will wait for data to arrive or for
 * the socket status to change which can be queried via 'sock_status'
 * 
 * Note: This is similar to `connect` in POSIX
 */
__wasi_errno_t __wasi_sock_connect(
    /**
     * Socket descriptor
     */
    __wasi_fd_t fd,
    /**
     * Address of the socket to connect to
     */
    const __wasi_addr_port_t * addr
) __attribute__((__warn_unused_result__));
/**
 * Receive a message from a socket.
 * Note: This is similar to `recv` in POSIX, though it also supports reading
 * the data into multiple buffers in the manner of `readv`.
 * @return
 * Number of bytes stored in ri_data and message flags.
 */
__wasi_errno_t __wasi_sock_recv(
    __wasi_fd_t fd,
    /**
     * List of scatter/gather vectors to which to store data.
     */
    const __wasi_iovec_t *ri_data,
    /**
     * The length of the array pointed to by `ri_data`.
     */
    size_t ri_data_len,
    /**
     * Message flags.
     */
    __wasi_riflags_t ri_flags,
    __wasi_size_t *retptr0,
    __wasi_roflags_t *retptr1
) __attribute__((__warn_unused_result__));
/**
 * Receive a message and its peer address from a socket.
 * Note: This is similar to `recvfrom` in POSIX, though it also supports reading
 * the data into multiple buffers in the manner of `readv`.
 * @return
 * Number of bytes stored in ri_data and message flags.
 */
__wasi_errno_t __wasi_sock_recv_from(
    __wasi_fd_t fd,
    /**
     * List of scatter/gather vectors to which to store data.
     */
    const __wasi_iovec_t *ri_data,
    /**
     * The length of the array pointed to by `ri_data`.
     */
    size_t ri_data_len,
    /**
     * Message flags.
     */
    __wasi_riflags_t ri_flags,
    __wasi_size_t *retptr0,
    __wasi_roflags_t *retptr1,
    __wasi_addr_port_t *retptr2
) __attribute__((__warn_unused_result__));
/**
 * Send a message on a socket.
 * Note: This is similar to `send` in POSIX, though it also supports writing
 * the data from multiple buffers in the manner of `writev`.
 * @return
 * Number of bytes transmitted.
 */
__wasi_errno_t __wasi_sock_send(
    __wasi_fd_t fd,
    /**
     * List of scatter/gather vectors to which to retrieve data
     */
    const __wasi_ciovec_t *si_data,
    /**
     * The length of the array pointed to by `si_data`.
     */
    size_t si_data_len,
    /**
     * Message flags.
     */
    __wasi_siflags_t si_flags,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Send a message on a socket to a specific address.
 * Note: This is similar to `sendto` in POSIX, though it also supports writing
 * the data from multiple buffers in the manner of `writev`.
 * @return
 * Number of bytes transmitted.
 */
__wasi_errno_t __wasi_sock_send_to(
    __wasi_fd_t fd,
    /**
     * List of scatter/gather vectors to which to retrieve data
     */
    const __wasi_ciovec_t *si_data,
    /**
     * The length of the array pointed to by `si_data`.
     */
    size_t si_data_len,
    /**
     * Message flags.
     */
    __wasi_siflags_t si_flags,
    /**
     * Address of the socket to send message to
     */
    const __wasi_addr_port_t * addr,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/**
 * Resolves a hostname and a port to one or more IP addresses.
 * 
 * Note: This is similar to `getaddrinfo` in POSIX
 * 
 * When successful, the contents of the output buffer consist of a sequence of
 * IPv4 and/or IPv6 addresses. Each address entry consists of a addr_t object.
 * This function fills the output buffer as much as possible.
 * @return
 * The number of IP addresses returned during the DNS resolution.
 */
__wasi_errno_t __wasi_resolve(
    /**
     * Host to resolve
     */
    const char *host,
    /**
     * Port hint (zero if no hint is supplied)
     */
    uint16_t port,
    /**
     * The buffer where IP addresses will be stored
     */
    __wasi_addr_ip_t * ips,
    __wasi_size_t nips,
    __wasi_size_t *retptr0
) __attribute__((__warn_unused_result__));
/** @} */

#ifdef __cplusplus
}
#endif

#endif
