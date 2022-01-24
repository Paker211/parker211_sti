import AuthController from "../controllers"
import Route from "./routes"


class AuthRoute extends Route {
  private authController = new AuthController();

  constructor() {
    super();
    this.prefix = '/auth';
    this.setRoutes();
  }

  protected setRoutes() {
    this.router.get('/login', this.authController.echo);
  }
}

export default AuthRoute;
