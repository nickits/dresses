CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG) -m64
LDFLAGS = -Wall -ansi -pedantic -frepo

LIBS= -lcppcms -lbooster -lwtdbo -lwtdbosqlite3

SOURCES_MAIN=dresses.cpp datasession.cpp

SOURCES_MODELS=	model/product.cpp \
		model/category.cpp \
		model/collection.cpp \
		model/image.cpp \
		model/video.cpp \
		model/client.cpp \
		model/ownerproduct.cpp \
		model/characteristic.cpp \
		model/featuredproduct.cpp \
		model/productcharacteristic.cpp \
		model/specialoffer.cpp \
		model/company.cpp \
		model/shop.cpp \
		model/sale.cpp \
		model/payment.cpp \
		model/saledetail.cpp

SOURCES_UTILS=	utils/jsonutils.cpp \
		utils/formgenerator.cpp

SOURCES_SERVICES=	services/productsservice.cpp
			

SOURCES_PAGES=	pages/basepage.cpp \
		pages/productpage.cpp

SOURCES_APPS=	apps/master.cpp \
		apps/list.cpp \
		apps/details.cpp \
		apps/user/user.cpp \
		apps/user/usermaster.cpp \
		apps/user/editdetails.cpp \
		apps/user/profile.cpp \
		apps/user/useritemslist.cpp 

SOURCES_TPL_CPP_VIEW = view/view.cpp

SOURCES_TPL_VIEW = 	view/master.tmpl \
			view/list.tmpl \
			view/details.tmpl

SOURCES_TPL_CPP_USERVIEW = view/user/userview.cpp

SOURCES_TPL_USERVIEW = 	view/user/master.tmpl \
			view/user/list.tmpl \
			view/user/details.tmpl \
			view/user/profile.tmpl

SOURCES=$(SOURCES_MAIN) $(SOURCES_APPS) $(SOURCES_MODELS) $(SOURCES_UTILS) $(SOURCES_SERVICES) $(SOURCES_PAGES) $(SOURCES_TPL_CPP_VIEW) $(SOURCES_TPL_CPP_USERVIEW)

OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=dresses

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ ${LIBS}

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

$(SOURCES_TPL_CPP_VIEW): 
	cppcms_tmpl_cc $(SOURCES_TPL_VIEW) -o $(SOURCES_TPL_CPP_VIEW)

$(SOURCES_TPL_CPP_USERVIEW): 
	cppcms_tmpl_cc $(SOURCES_TPL_USERVIEW) -o $(SOURCES_TPL_CPP_USERVIEW)

#%.cpp: %.tmpl
#	cppcms_tmpl_cc $< -o $@

# templates/content.cpp: templates/content.tmpl templates/content.h
# 	cppcms_tmpl_cc templates/content.tmpl -o templates/content.cpp

clean:
	rm -fr dresses *.so *.o ./*/*.o ./view/*.cpp ./view/user/*.cpp cppcms_rundir
