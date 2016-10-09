/*
** errors.h for new_project in /home/moutou_m/rendu/new_project/lib/liberror/include
**
** Made by moutou_m
** Login   <moutou_m@epitech.net>
**
** Started on  Sat Oct 08 11:30:36 2016 moutou_m
** Last update Sun Oct 09 15:40:37 2016 moutou_m
*/

#ifndef ERRORS_H_
# define ERRORS_H_

typedef enum e_error_type{
  LWARNING,
  LFATAL,
  LNOERR,
  LDEBUG,
  LINFO,
  LASSERT
} errortype_t;


typedef struct 	s_error {
  errortype_t 	type;
  char		*error_name;
} 		error_t;

/*
** Tab with differents errors : src/error_tab.c
*/
extern const error_t g_error_tab[];

/*
** globales : src/globales.c
*/
extern int g_fd;
extern unsigned int g_cursor;

/*
** [Initialisation of liberror]
** @method error_init
*/
void error_init() __attribute__((constructor));

/*
** [put this macro 'FNSTART' at the begin of a function]
** @method error_fn_start
** @param  file           [__FILE__]
** @param  fn             [__FUNCTION__]
** @param  line           [__LINE__]
*/
void error_fn_start(const char *file,
		    const char *fn,
		    const unsigned int line);
#define FNSTART() error_fn_start(__FILE__, __FUNCTION__, __LINE__)

/*
** [put this macro 'FNQUIT' at the end of a function]
** @method error_fn_end
** @param  fn           [__FUNCTION__]
*/
void error_fn_end(const char *fn);
#define FNQUIT() error_fn_end(__FUNCTION__)

/*
** [print a message in the log]
** @method error_print
** @param  type        [error type : 'errortype_t']
** @param  msg         [message to print in the log]
** @param  fn          [__FUNCTION__]
** @param  line        [__LINE__]
*/
void error_print(const errortype_t type,
		 const char *msg,
		 const char *fn,
		 const unsigned int line);
#define FNPRINT(TYPE, MSG) error_print(TYPE, MSG, __FUNCTION__, __LINE__)

/*
** [same function as assert()]
** @method error_assert
** @param  msg          [message to print in the log]
** @param  fn           [__FUNCTION__]
** @param  line         [__LINE__]
** @param  state        [0 or 1]
*/
void error_assert(const char *msg,
		  const char *fn,
		  const unsigned int line,
		  const int state);
#define FNASSERT(COND) error_assert(#COND, __FUNCTION__, __LINE__, COND)

/*
** [close the log file]
** @method error_quit
*/
void error_quit() __attribute__((destructor));

#endif
