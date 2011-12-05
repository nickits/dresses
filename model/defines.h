#include <Wt/Dbo/Types>

namespace dbo = Wt::Dbo;

class Product;
class Category;
class Collection;
class Image;
class Video;
class OwnerProduct;

typedef dbo::collection<dbo::ptr<Product> > Products;
typedef dbo::collection<dbo::ptr<Category> > Categories;
typedef dbo::collection<dbo::ptr<Collection> > Collections;
typedef dbo::collection<dbo::ptr<Image> > Images;
typedef dbo::collection<dbo::ptr<Video> > Videos;
typedef dbo::collection<dbo::ptr<OwnerProduct> OwnerProducts;

typedef std::map<std::string, void*> MapAny;
typedef std::pair<std::string, void*> PairAny;

