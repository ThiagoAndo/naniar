#' Common number values for NA
#'
#' This vector contains common number values of NA (missing), which is aimed to
#'   be used inside naniar functions [miss_scan_count()] and
#'   [replace_with_na()]. The current list of numbers can be found by printing
#'   out `common_na_numbers`. It is a useful way to explore your data for
#'   possible missings, but I strongly warn against using this to replace NA
#'   values without very carefully looking at the incidence for each of the
#'   cases. Common NA strings are in the data object `common_na_strings`.
#'
#' @note original discussion here \url{https://github.com/njtierney/naniar/issues/168}
#'
#' @name common_na_numbers
#' @docType data
#' @examples
#'
#' dat_ms <- tibble::tribble(~x,  ~y,    ~z,
#'                           1,   "A",   -100,
#'                           3,   "N/A", -99,
#'                           NA,  NA,    -98,
#'                           -99, "E",   -101,
#'                           -98, "F",   -1)
#'
#' miss_scan_count(dat_ms, -99)
#' miss_scan_count(dat_ms, c("-99","-98","N/A"))
#' common_na_numbers
#' miss_scan_count(dat_ms, common_na_numbers)
"common_na_numbers"
