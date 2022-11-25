using Microsoft.AspNetCore.Mvc;
using tp1.data;
using tp1.Models;
namespace tp1.Controllers
{
    public class CategoryController : Controller
    {
        private readonly ApplicationDBcontext _db;
        public CategoryController(ApplicationDBcontext db)
        {
            _db = db;
        }
        public IActionResult Index()
        {
            var obj = _db.categories.ToList();
            return View(obj);
        }
        

        public IActionResult Create()
        {
            return View();
        }

        [HttpPost]

        public IActionResult Create(Category obj) {
            _db.categories.Add(obj);
            _db.SaveChanges();
            return View(obj);
        }

        [HttpPost, ActionName("Delete")]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Delete(int id)
        {
            var category = await _db.categories.FindAsync(id);
            if (category == null)
            {
                return NotFound();
            }
            _db.categories.Remove(category);
            await _db.SaveChangesAsync();
            return RedirectToAction(nameof(Index));
        }
    }
}
