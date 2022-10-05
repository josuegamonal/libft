/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgamonal <jgamonal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:30:45 by jgamonal          #+#    #+#             */
/*   Updated: 2022/10/05 08:31:28 by jgamonal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The malloc(), calloc(), valloc(), realloc(), and reallocf() functions allocate memory.  The allocated
     memory is aligned such that it can be used for any data type, including AltiVec- and SSE-related
     types.  The aligned_alloc() function allocates memory with the requested alignment.  The free() func-
     tion frees allocations that were created via the preceding allocation functions.

     The malloc() function allocates size bytes of memory and returns a pointer to the allocated memory.

     The calloc() function contiguously allocates enough space for count objects that are size bytes of
     memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes
     of value zero.

     The valloc() function allocates size bytes of memory and returns a pointer to the allocated memory.
     The allocated memory is aligned on a page boundary.

     The aligned_alloc() function allocates size bytes of memory with an alignment specified by alignment
     and returns a pointer to the allocated memory.

     The realloc() function tries to change the size of the allocation pointed to by ptr to size, and
     returns ptr.  If there is not enough room to enlarge the memory allocation pointed to by ptr,
     realloc() creates a new allocation, copies as much of the old data pointed to by ptr as will fit to
     the new allocation, frees the old allocation, and returns a pointer to the allocated memory.  If ptr
     is NULL, realloc() is identical to a call to malloc() for size bytes.  If size is zero and ptr is not
     NULL, a new, minimum sized object is allocated and the original object is freed.  When extending a
     region allocated with calloc(3), realloc(3) does not guarantee that the additional memory is also
     zero-filled.

     The reallocf() function is identical to the realloc() function, except that it will free the passed
     pointer when the requested memory cannot be allocated.  This is a FreeBSD specific API designed to
     ease the problems with traditional coding styles for realloc causing memory leaks in libraries.

     The free() function deallocates the memory allocation pointed to by ptr. If ptr is a NULL pointer, no
     operation is performed.

RETURN VALUES
     If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and aligned_alloc() functions
     return a pointer to allocated memory.  If there is an error, they return a NULL pointer and set errno
     to ENOMEM.

     In addition, aligned_alloc() returns a NULL pointer and sets errno to EINVAL if size is not an inte-
     gral multiple of alignment, or if alignment is not a power of 2 at least as large as sizeof(void *).

     For realloc(), the input pointer is still valid if reallocation failed.  For reallocf(), the input
     pointer will have been freed if reallocation failed.

     The free() function does not return a value.*/
	 