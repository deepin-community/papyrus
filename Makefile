#	@(#)Makefile	1.3	5/3/91

ARCH=		Solaris
DSTDIR=		.
MANDIR=		$(DSTDIR)/man
JPEGDIRLL=	JpegDir/JpgLless
JPEGDIRLY=	JpegDir/JpgLossy
DICOMDIR=	DicomDir
MAYODIR=	Mayo
BINDIR=		$(DSTDIR)/test
LIBDIR=		$(DSTDIR)/$(ARCH)/lib
LINTLIBDIR=     $(LIBDIR)/lint

INSTALLDIR=	/home/Dorad/dorad/bin

CPPFLAGS=	-I. -I../.. -I$(DICOMDIR) -I$(JPEGDIRLL) -I$(JPEGDIRLY) -D_NO_LONGLONG -DSolaris
CFLAGS=		-g
LINTFLAGS=	-hb

SOURCES= \
		PapyConvertFile3.c \
		PapyError3.c \
		PapyFileSystemUnix3.c \
		PapyFiles3.c \
		PapyGetGlobalVar3.c \
		PapyInit3.c \
		PapyInitGroups3.c \
		PapyInitModules3.c \
		PapyRead3.c \
		PapyDataSetRead3.c \
		PapyList3.c \
		PapyVars3.c \
		PapyWrite3.c \
		PapyDataSetWrite3.c \
		PapyEallocUnix3.c \
		PapyWild3.c \
		PapyWildexit3.c \
		PapyUtils3.c

LIBRARY=	libP.a

OBJECTS=	$(SOURCES:%.c=$(ARCH)/%.o)

$(LIBDIR)/$(LIBRARY): createdir $(OBJECTS)
		ar rv $@ $(OBJECTS)
		cd JpegDir/JpgLless;make;
		cd JpegDir/JpgLossy;make;
		cd DicomDir;make

lint:		$(SOURCES)
		$(LINT.c) $(SOURCES)


createdir:	
		test -d $(ARCH) || mkdir -p $(ARCH)
		test -d $(DSTDIR)/$(ARCH)/lib || mkdir -p $(DSTDIR)/$(ARCH)/lib

install:	$(LIBDIR)/$(LIBRARY)
		cp $(LIBDIR)/libP.a $(INSTALLDIR)
		cp $(LIBDIR)/libJpglossy.a $(INSTALLDIR)
		cp $(LIBDIR)/libJpglless.a $(INSTALLDIR)
		cp $(LIBDIR)/libDicomdir.a $(INSTALLDIR)

clean:
		-rm -Rf $(ARCH);
		cd JpegDir/JpgLless;make clean;
		cd JpegDir/JpgLossy;make clean;
		cd DicomDir;make clean
		

.KEEP_STATE:
.INIT:	$(LIBDIR) $(ARCH)
$(LIBDIR) $(ARCH) :
		test -d $@ || mkdir -p $@

$(ARCH)/%.o: %.c
		$(COMPILE.c) $< -o $@
