"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const router_1 = require("../common/router");
class UserRouter extends router_1.Router {
    applyRouter(application) {
        application.get('/users', (req, resp, next) => {
            resp.json([{ name: "ana" }, { name: "joana" }, { name: "fernanda" }]);
            return next();
        });
        application.get('/users/:id', (req, resp, next) => {
            resp.json({ name: req.params.id });
            return next();
        });
        application.post('/user', (req, resp, next) => {
            console.log(req.body);
            resp.json(req.body);
            return next();
        });
    }
}
exports.usersRouter = new UserRouter;
