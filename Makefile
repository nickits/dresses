CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) -m64
LDFLAGS = -Wall -ansi -pedantic -frepo

LIBS= -lcppcms -lbooster -lwtdbosqlite3

SOURCES_MAIN=dresses.cpp datasession.cpp

SOURCES_MODELS=	model/product.cpp \
		model/category.cpp \
		model/collection.cpp \
		model/image.cpp \
		model/video.cpp

SOURCES_UTILS=	utils/jsonutils.cpp \
		utils/formgenerator.cpp

SOURCES_SERVICES=	services/productsservice.cpp
			

SOURCES_PAGES=	pages/basepage.cpp \
		pages/productpage.cpp

SOURCES_TEMPLATES =	templates/content1.cpp \
 			templates/content2.cpp \
 			templates/admin.cpp

SOURCES=$(SOURCES_MAIN) $(SOURCES_MODELS) $(SOURCES_UTILS) $(SOURCES_SERVICES) $(SOURCES_PAGES) $(SOURCES_TEMPLATES)

OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=dresses

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ ${LIBS}

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

%.cpp: %.tmpl
	cppcms_tmpl_cc $< -o $@

# templates/content.cpp: templates/content.tmpl templates/content.h
# 	cppcms_tmpl_cc templates/content.tmpl -o templates/content.cpp

clean:
	rm -fr dresses *.so *.o ./*/*.o ./templates/*.cpp cppcms_rundir
