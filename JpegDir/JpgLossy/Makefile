#	@(#)Makefile	1.3	5/3/91

ARCH=		Solaris
DSTDIR=		..
MANDIR=		$(DSTDIR)/man
INCDIR=		$(DSTDIR)/include
BINDIR=		$(DSTDIR)/test
LIBDIR=		../$(DSTDIR)/$(ARCH)/lib
LINTLIBDIR=	$(LIBDIR)/lint

CPPFLAGS=	-I$(INCDIR) -I../.. -D_NO_LONGLONG
CFLAGS=		-g
LINTFLAGS=	-hb


SOURCES= 	jcapimin.c \
		jcapistd.c \
		jccoefct.c \
		jccolor.c \
		jcdctmgr.c \
		jchuff.c \
		jcinit.c \
		jcmainct.c \
		jcmaster.c \
		jcmarker.c \
		jcomapi.c \
		jcparam.c \
		jcphuff.c \
		jcprepct.c \
		jcsample.c \
		jdapimin.c \
		jdapistd.c \
		jdatadst.c \
		jdatasrc.c \
		jdcoefct.c \
		jdcolor.c \
		jddctmgr.c \
		jdhuff.c \
		jdinput.c \
		jdmainct.c \
		jdmarker.c \
		jdmaster.c \
		jdmerge.c \
		jdphuff.c \
		jdpostct.c \
		jdsample.c \
		jerror.c \
		jfdctint.c \
		jfdctflt.c \
		jfdctfst.c \
		jidctflt.c \
		jidctfst.c \
		jidctint.c \
		jidctred.c \
		jmemmgr.c \
		jmemnobs.c \
		jquant1.c \
		jquant2.c \
		jutils.c \
		rdcolmap.c


LIBRARY=	libJpglossy.a

OBJECTS=	$(SOURCES:%.c=$(ARCH)/%.o)

$(LIBDIR)/$(LIBRARY): createdir $(OBJECTS)
		ar rv $@ $(OBJECTS)

lint:		$(SOURCES)
		$(LINT.c) $(SOURCES)


createdir:	
		test -d $(ARCH) || mkdir -p $(ARCH)
		test -d $(DSTDIR)/$(ARCH)/lib || mkdir -p $(DSTDIR)/$(ARCH)/lib

clean:
		-rm -Rf $(ARCH)


.KEEP_STATE:
.INIT:   $(LIBDIR) $(ARCH)
$(LIBDIR) $(ARCH) :
		test -d $@ || mkdir -p $@

$(ARCH)/%.o: %.c
		$(COMPILE.c) $< -o $@



