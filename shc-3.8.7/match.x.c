#if 0
	shc Version 3.8.7, Generic Script Compiler
	Copyright (c) 1994-2009 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -f match 
#endif

static  char data [] = 
#define      tst1_z	22
#define      tst1	((&data[1]))
	"\223\267\143\334\341\311\265\243\235\243\364\122\336\133\050\207"
	"\156\156\236\006\352\304\133"
#define      tst2_z	19
#define      tst2	((&data[26]))
	"\305\230\133\363\026\303\001\365\235\157\200\147\052\367\035\134"
	"\374\006\207\211\001\004\006"
#define      date_z	1
#define      date	((&data[46]))
	"\051"
#define      inlo_z	3
#define      inlo	((&data[47]))
	"\127\012\223"
#define      shll_z	8
#define      shll	((&data[51]))
	"\222\327\034\031\072\312\217\265\363\220"
#define      lsto_z	1
#define      lsto	((&data[60]))
	"\100"
#define      xecc_z	15
#define      xecc	((&data[64]))
	"\335\010\232\347\044\033\142\373\077\206\046\072\213\211\067\326"
	"\037\065\132\075"
#define      opts_z	1
#define      opts	((&data[81]))
	"\271"
#define      chk1_z	22
#define      chk1	((&data[83]))
	"\001\230\033\111\320\054\151\162\012\133\300\335\003\117\077\275"
	"\040\263\224\205\030\356\347\255\351\050\360\307"
#define      msg2_z	19
#define      msg2	((&data[111]))
	"\247\264\114\157\144\147\370\065\167\372\312\025\361\276\065\241"
	"\142\073\017\023"
#define      chk2_z	19
#define      chk2	((&data[133]))
	"\172\035\120\300\300\237\260\102\355\102\364\222\165\210\306\024"
	"\055\223\226\121\050\332\355"
#define      rlax_z	1
#define      rlax	((&data[153]))
	"\374"
#define      text_z	337
#define      text	((&data[176]))
	"\205\202\365\163\237\137\305\202\141\162\153\211\142\062\372\252"
	"\125\241\223\011\333\016\045\365\201\306\303\273\213\061\267\300"
	"\134\113\065\247\010\220\020\250\325\174\322\204\235\270\371\350"
	"\155\030\102\067\056\026\100\151\356\154\265\377\161\175\271\124"
	"\141\361\257\344\300\135\212\067\256\370\222\377\173\205\077\033"
	"\030\263\361\153\203\135\262\061\324\171\015\306\171\233\201\165"
	"\117\342\271\171\336\221\035\253\044\304\202\276\213\077\130\226"
	"\267\037\257\221\156\314\146\144\327\046\105\351\350\274\034\137"
	"\365\074\301\151\374\265\321\005\331\042\236\262\077\271\144\371"
	"\227\316\174\303\212\365\302\222\142\230\375\145\253\110\354\024"
	"\176\002\052\042\172\331\112\030\230\117\333\046\103\355\376\066"
	"\162\300\345\256\217\030\140\002\152\122\276\216\315\103\354\113"
	"\154\141\117\074\002\041\345\360\321\026\174\260\046\301\356\321"
	"\243\044\134\104\026\023\141\103\062\373\162\204\251\043\035\222"
	"\016\010\115\126\340\050\261\250\132\325\372\173\047\015\242\265"
	"\075\025\253\127\200\135\357\114\064\167\242\366\003\060\272\305"
	"\333\102\135\001\272\244\170\272\247\301\021\141\103\276\164\164"
	"\354\321\150\113\000\051\174\307\271\026\104\375\354\131\315\263"
	"\136\237\312\067\032\361\257\050\367\367\344\255\353\151\052\154"
	"\317\042\054\333\354\110\163\250\022\166\370\366\331\276\010\316"
	"\267\252\037\127\376\010\041\224\225\230\153\104\072\114\107\247"
	"\306\152\062\263\233\113\222\023\175\210\271\342\260\162\315\002"
	"\061\327\147\052\237\143\362\047\054\373\164\151\222\236\256\303"
	"\044\060\271\230\320\030\135"
#define      pswd_z	256
#define      pswd	((&data[560]))
	"\275\003\062\360\376\334\105\237\160\117\173\176\167\250\172\353"
	"\021\015\212\300\321\256\361\212\106\301\243\244\023\035\164\067"
	"\350\263\125\154\036\120\205\131\147\116\342\040\306\257\162\225"
	"\230\170\255\033\026\232\151\165\253\357\172\036\261\224\126\232"
	"\110\254\007\146\374\214\300\143\333\242\203\242\122\365\067\352"
	"\155\344\006\203\177\160\371\052\140\164\111\021\011\237\253\121"
	"\113\262\270\110\077\171\253\033\034\056\275\156\043\365\131\221"
	"\331\140\025\131\320\016\204\060\203\316\101\214\155\355\335\271"
	"\240\226\001\340\017\255\373\053\333\271\232\377\257\363\220\211"
	"\123\245\342\043\264\146\124\067\064\225\303\242\203\241\134\044"
	"\070\136\004\107\013\000\163\347\272\015\346\151\001\167\362\124"
	"\034\324\170\321\073\314\010\160\142\314\023\345\156\157\012\246"
	"\316\016\356\332\017\142\301\311\157\250\062\161\037\044\305\074"
	"\371\075\015\065\012\026\245\154\343\270\122\121\050\134\370\366"
	"\153\346\321\172\110\222\104\270\072\166\051\132\233\356\227\224"
	"\054\244\311\066\273\157\243\236\050\365\360\120\121\350\107\275"
	"\316\030\067\026\253\173\317\346\362\370\100\216\347\327\043\024"
	"\174\354\113\067\134\356\326\204\343\306\324\064\256\034\361\321"
	"\040\246\302\036\203\007\276\363\127\072\162\316\343\355\272\364"
	"\372\104\265\313\363\246\125\071\150\371\335\174\026\121\115\067"
	"\370\017\126\173\027\025\157\157\117\342\076\062\317\370\047\312"
	"\075\335\225"
#define      msg1_z	42
#define      msg1	((&data[873]))
	"\152\354\344\107\150\037\201\215\155\100\353\367\005\147\312\175"
	"\137\377\041\267\357\067\062\217\353\060\036\103\242\011\013\054"
	"\017\137\300\214\343\251\204\347\036\157\010\001\216\147\311\373"
	"\231\265\063\222\305\211\016\335\236"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		if (text_z < hide_z) {
			/* Prepend spaces til a hide_z script size. */
			scrpt = malloc(hide_z);
			if (!scrpt)
				return 0;
			memset(scrpt, (int) ' ', hide_z);
			memcpy(&scrpt[hide_z - text_z], text, text_z);
		} else {
			scrpt = text;	/* Script text */
		}
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, argv[0]);
		} else {
			scrpt = argv[0];
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
