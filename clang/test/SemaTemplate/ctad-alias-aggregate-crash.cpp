// RUN: not %clang_cc1 -std=c++23 -fsyntax-only %s
// Reduced from a fuzzer-generated crash report.
// Ensure we don't crash when aggregate deduction guide resolution
// fails for a type alias template during CTAD.
__detail __detail:);
template _Tptypename convertible_to_Tpcommon_reference_t_Tp_Up }
requires0template
namespace ranges __iter_traits >;
template  __iter_diff_tremove_cvref_t_Tp rangesiter_swap0
namespace detail {
template < typename > struct difference_type_
}
template < typename T > using difference_type = difference_type_< T >;
namespace detail {
template < typename T >
struct difference_type_ :  T
} difference_type alloc_limit = 4
