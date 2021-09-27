#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>

// This function compares lhs and rhs, then returns 1 if lhs > rhs, -1 if lhs < rhs, else 0.
// This function must be implemented for each data type.
typedef int (*compare_t)(const void*, const void*);

// This function performs sorting algorithm without loss of generality of data type.
typedef void (*sort_func_t)(void*, size_t nmemb, size_t size, compare_t); 

/* Data types */
enum e_workload {
  ew_num, ew_str, ew_student, ew_count
};

struct Student {
  int id;
  char name[512];
};

int compare_numbers(const void* lhs, const void* rhs);
int compare_strings(const void* lhs, const void* rhs);
int compare_students(const void* lhs, const void* rhs);

static compare_t compare_funcs[ew_count] = {
  compare_numbers,
  compare_strings,
  compare_students
};

/* Sorting algorithms */
enum e_sort_type {
  est_insertion, est_selection, est_merge, est_count
};

void insertion_sort(void* data, size_t nmemb, size_t size, compare_t compare);
void selection_sort(void* data, size_t nmemb, size_t size, compare_t compare);
void merge_sort(void* data, size_t nmemb, size_t size, compare_t compare);

static sort_func_t sort_funcs[est_count] = {
  insertion_sort,
  selection_sort,
  merge_sort
};

static const char* sort_funcs_name[est_count] = {
  "Insertion sort",
  "Selection sort",
  "Merge sort"
};


int main(int argc, char** argv)
{
  if (argc != 2) {
    fprintf(stderr, "Usage: ./sort <num|str|student>\n");
    exit(-1);
  }

  // TODO: Handle user's input. Check out files in ./in.
  
  enum e_workload workload_type = ew_num;

  if (strcmp(argv[1], "num") == 0) {
    workload_type = ew_num;
  } else if (strcmp(argv[1], "str") == 0) {
    workload_type = ew_str;
  } else if (strcmp(argv[1], "student") == 0) {
    workload_type = ew_student;
  }

  for (int i = 0; i < est_count; ++i) {
    struct timeval start;
    gettimeofday(&start, NULL);

    // TODO: Call sort_funcs[i]

    struct timeval end;
    gettimeofday(&end, NULL);

    fprintf(stderr, "%s: %lf\n", sort_funcs_name[i], ((end.tv_sec + end.tv_usec * 0.000001) - (start.tv_sec + start.tv_usec * 0.000001)));
  }

  // TODO: Print sorted result as written in ./out.

  return 0;
}

// Data type 1: Number sorting
int compare_numbers(const void* lhs, const void* rhs) {
  // TODO: Fill this!
}

// Data type 2: Single digit string sorting
int compare_strings(const void* lhs, const void* rhs) {
  // TODO: Fill this!
}

// Data type 3: Struct sorting
int compare_students(const void* lhs, const void* rhs) {
  // TODO: Fill this!
}

// Sorting algorithm 1: Insertion sort
void insertion_sort(void* data, size_t nmemb, size_t size, compare_t compare)
{
  // TODO: Fill this!
}

// Sorting algorithm 2: Selection sort
void selection_sort(void* data, size_t nmemb, size_t size, compare_t compare)
{
  // TODO: Fill this!
}

// Sorting algorithm 3: Merge sort
void merge_sort(void* data, size_t nmemb, size_t size, compare_t compare)
{
  // TODO: Fill this!
}
